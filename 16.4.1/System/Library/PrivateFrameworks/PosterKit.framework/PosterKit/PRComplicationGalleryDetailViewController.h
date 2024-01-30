@class NSArray, NSString, UIImage;
@protocol PRComplicationGalleryWidgetHostProviding, PRComplicationGalleryDetailViewControllerDelegate;

@interface PRComplicationGalleryDetailViewController : UIViewController <PRComplicationGalleryDetailViewDelegate, PRComplicationGalleryDetailPageViewControllerDelegate>

@property (weak, nonatomic) id<PRComplicationGalleryWidgetHostProviding> widgetHostProviding;
@property (copy, nonatomic) NSArray *pageViewControllers;
@property (weak, nonatomic) id<PRComplicationGalleryDetailViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSArray *descriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateParallax;
- (void)_updateContent;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)complicationGalleryDetailPageViewController:(id)a0 didAddComplication:(id)a1;
- (void)complicationGalleryView:(id)a0 didUpdateVisiblePagesWithAppearedBlock:(id /* block */)a1;
- (id)_complicationGalleryDetailView;
- (void)complicationGalleryViewDidTapClose:(id)a0;
- (void)complicationGalleryViewShouldUpdateParallax:(id)a0;
- (id)initWithWidgetHostProviding:(id)a0;

@end

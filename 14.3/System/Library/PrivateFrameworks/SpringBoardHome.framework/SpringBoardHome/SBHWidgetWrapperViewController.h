@class NSArray, NSString, SBIconView, SBHWidgetWrapperView;
@protocol SBHWidgetWrapperViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBHAddWidgetSheetGalleryItem;

@interface SBHWidgetWrapperViewController : UIViewController <SBIconViewObserver, SBIconViewActionDelegate>

@property (nonatomic) BOOL titleAndSubtitleVisible;
@property (readonly, nonatomic) SBIconView *iconView;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } shadowTransform;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) id<SBHAddWidgetSheetGalleryItem> galleryItem;
@property (readonly, copy, nonatomic) NSArray *supportedSizeClasses;
@property (readonly, nonatomic) SBHWidgetWrapperView *wrapperView;
@property (nonatomic) unsigned long long indexOfSelectedSizeClass;
@property (nonatomic) long long selectedSizeClass;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (weak, nonatomic) id<SBHWidgetWrapperViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_removeIconView;
- (void)iconView:(id)a0 didChangeCustomImageViewController:(id)a1;
- (void)dealloc;
- (void)loadView;
- (id)initWithGalleryItem:(id)a0 titleAndSubtitleVisible:(BOOL)a1 listLayoutProvider:(id)a2 iconViewProvider:(id)a3;
- (void)iconViewWillBeginDrag:(id)a0;
- (void)iconViewDidEndDrag:(id)a0;
- (void)_updateAvocadoHostViewController;
- (id)_widgetDragHandler;
- (void)_configureCustomImageViewController:(id)a0;
- (void)_configureIconView:(id)a0 forIcon:(id)a1;
- (void)setGalleryItem:(id)a0;
- (void)iconTouchBegan:(id)a0;

@end

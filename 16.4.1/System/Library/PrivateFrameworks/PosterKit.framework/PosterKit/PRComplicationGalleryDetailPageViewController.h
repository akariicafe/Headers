@class UIStackView, NSArray, UILayoutGuide, UIView, PRAddWidgetDetailSheetWidgetDescriptionView, CHSWidgetDescriptor;
@protocol PRComplicationGalleryWidgetHostProviding, PRComplicationGalleryDetailPageViewControllerDelegate;

@interface PRComplicationGalleryDetailPageViewController : UIViewController

@property (weak, nonatomic) id<PRComplicationGalleryWidgetHostProviding> widgetHostProviding;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PRAddWidgetDetailSheetWidgetDescriptionView *descriptionView;
@property (retain, nonatomic) UIStackView *complicationsStackView;
@property (copy, nonatomic) NSArray *complicationDescriptors;
@property (retain, nonatomic) UIView *referenceView;
@property (retain, nonatomic) CHSWidgetDescriptor *descriptor;
@property (weak, nonatomic) id<PRComplicationGalleryDetailPageViewControllerDelegate> delegate;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapCell:(id)a0;
- (id)initWithWidgetHostProviding:(id)a0;
- (void)updateParallaxEffectInReferenceView:(id)a0;

@end

@class UIViewController, NSString, CPSBannerItem, PLPlatterView, CPSGuidanceBannerView;
@protocol CPSBannerViewControllerDelegate;

@interface CPSBannerViewController : UIViewController <BNPresentable>

@property (retain, nonatomic) PLPlatterView *platterView;
@property (retain, nonatomic) CPSGuidanceBannerView *bannerView;
@property (weak, nonatomic) id<CPSBannerViewControllerDelegate> delegate;
@property (readonly, nonatomic) CPSBannerItem *bannerItem;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_wheelChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewDidLoad;
- (void)presentableDidAppearAsBanner:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_handleBackGesture:(id)a0;
- (id)initWithBannerItem:(id)a0;
- (void)updateBannerWithBannerItem:(id)a0;
- (void)_bannerTapped:(id)a0;

@end

@class NSString, ACUISActivityHostViewController, PLPlatterView, UIView, UIViewController;
@protocol SBActivityBannerViewControllerDelegate, BNPresentableContext;

@interface SBActivityBannerViewController : UIViewController <ACUISActivityHostViewControllerDelegate, BNPresentable>

@property (class, readonly, copy) NSString *requesterIdentifier;

@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController;
@property (readonly, nonatomic) PLPlatterView *platterView;
@property (readonly, nonatomic) UIView *backgroundTintView;
@property (weak, nonatomic) id<SBActivityBannerViewControllerDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredBannerContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)_layoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_activityIdentifier;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_unlockAndLaunchAppIfPossible:(id)a0 withAction:(id)a1;
- (void)activityHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (id)initWithActivityViewController:(id)a0;
- (BOOL)_hasBackgroundTintColor;

@end

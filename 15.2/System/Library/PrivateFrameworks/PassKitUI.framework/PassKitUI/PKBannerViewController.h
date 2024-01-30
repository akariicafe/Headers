@class NSTimer, NSString, PKSecureElementPass, UIImageView, UIButton, PLPlatterView, UIViewController, BNBannerSourceLayoutDescription, PKBannerModel, UILabel;
@protocol BNPresentableContext, PKBannerViewControllerDelegate;

@interface PKBannerViewController : UIViewController <BNPresentable> {
    PLPlatterView *_platterView;
    NSTimer *_dismissTimer;
    id<PKBannerViewControllerDelegate> _delegate;
    UIImageView *_cardArtImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    BOOL _wasAutomaticallyDismissed;
}

@property (readonly, nonatomic) long long destination;
@property (readonly, nonatomic) BNBannerSourceLayoutDescription *layoutDescription;
@property (readonly, nonatomic) PKBannerModel *bannerModel;
@property (readonly, nonatomic) PKSecureElementPass *pass;
@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldShowActionButton;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_newPlatterView;
- (void)_handleBannerTapped:(id)a0;
- (void)_scheduleDismissTimerIfNecessary;
- (void)_cleanupAndDismissBannerWithAutomaticDismissal:(BOOL)a0;
- (id)initWithSecureElementPass:(id)a0 destination:(long long)a1 layoutDescription:(id)a2 bannerModel:(id)a3 delegate:(id)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;

@end

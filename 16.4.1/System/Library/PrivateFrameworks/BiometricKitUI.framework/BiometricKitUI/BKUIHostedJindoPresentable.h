@class UIView, NSString, NSURL, BKUIPearlEnrollView, BSAction, NSLayoutConstraint, BNBannerSourceLayoutDescription, UIViewController, UIColor;
@protocol BKJindoPresentableObserving, SBUISystemApertureAccessoryView, BNPresentableContext, SBUISystemApertureElement;

@interface BKUIHostedJindoPresentable : UIViewController <BNPresentableObserving, BNHostedContentProviding, BNPresentable, SBUISystemApertureElementProviding, SBUISystemApertureElement>

@property (retain, nonatomic) NSLayoutConstraint *centerYAnchor;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) long long destination;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) BNBannerSourceLayoutDescription *layoutDescription;
@property (nonatomic) long long preferredLayoutMode;
@property (nonatomic) long long preferredCustomLayout;
@property (retain, nonatomic) BKUIPearlEnrollView *enrollView;
@property (weak, nonatomic) id<BKJindoPresentableObserving> observingDelegate;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, weak, nonatomic) id<SBUISystemApertureElement> systemApertureElement;
@property (nonatomic) long long activeLayoutMode;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) long long maximumLayoutMode;
@property (readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) long long minimumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;

+ (id)_bundleID;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void)collapse;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)revoke;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)a0;
- (id)systemApertureElementProvider;
- (id)initWithCustomLayout:(long long)a0 enrollView:(id)a1 destination:(long long)a2;
- (id)userInfoForPosting;

@end

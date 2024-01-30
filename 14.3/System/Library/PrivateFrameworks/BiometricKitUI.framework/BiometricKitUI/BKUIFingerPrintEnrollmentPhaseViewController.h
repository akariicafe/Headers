@class UIView, NSString, NSArray, BKUIAlertView, BKUICurvesView, OBTrayButton, UIButton, NSObject, NSLayoutConstraint, BKUIIndicatorWindow;
@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;

@interface BKUIFingerPrintEnrollmentPhaseViewController : OBTouchIDEnrollmentWelcomeController {
    NSObject<OS_os_log> *bkui_fingerprint_enroll_view_controller_log;
}

@property (retain, nonatomic) BKUIAlertView *alertView;
@property (retain, nonatomic) UIView *mesaEnrollErrorButtonsContainer;
@property (retain, nonatomic) UIButton *mesaEnrollErrorButtonRestartEnroll;
@property (nonatomic) BOOL hideUnlockMessage;
@property (retain, nonatomic) BKUICurvesView *mesaFirstEnrollView;
@property (retain, nonatomic) BKUICurvesView *mesaSecondEnrollView;
@property (retain, nonatomic) NSArray *mesaEnrollContainerConstraints;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBTrayButton *retryButton;
@property (retain, nonatomic) OBTrayButton *skipButton;
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint;
@property (nonatomic) BOOL rotating;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *enrollCurvesViewCenterConstraint;
@property (nonatomic) BOOL disableContentViewSizing;
@property (retain, nonatomic) NSString *headerTitle;
@property (nonatomic) double innerAndOuterCurvesViewHeightDiff;
@property (nonatomic) double enrollProgress;
@property (retain, nonatomic) BKUIIndicatorWindow *touchindicatorWindow;
@property (weak, nonatomic) id<BKUIEmbeddedEnrollmentSelectionType> delegate;
@property (nonatomic) unsigned long long enrollViewState;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL showDisclaimer;
@property (nonatomic) BOOL shouldShowFollowupFingerEnrollmentUpSell;
@property (nonatomic) BOOL showFollowUpEnrollmentUpSellContent;
@property (nonatomic) BOOL isSecondEnrollment;
@property (nonatomic) long long initialInterfaceOrientation;

- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAnimateEntireView;
- (void)setHeaderTitle:(id)a0 animated:(BOOL)a1 heightDifference:(id /* block */)a2;
- (void)_continuePressed:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_subtitleFont;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_forceLayout;
- (BOOL)_isJ307;
- (BOOL)_isIPad;
- (void)viewDidLoad;
- (id)initInBuddy:(BOOL)a0 showDisclaimer:(BOOL)a1 hideUnlockMessage:(BOOL)a2 showFollowUpSell:(BOOL)a3 headerTitle:(id)a4 firstEnrollView:(id)a5 secondEnrollView:(id)a6;
- (void)removeTouchIndicator;
- (void)setEnrollProgress:(float)a0 enrollView:(id)a1;
- (id)_detailPhasesText;
- (id)initInBuddy:(BOOL)a0 showDisclaimer:(BOOL)a1 hideUnlockMessage:(BOOL)a2 headerTitle:(id)a3 firstEnrollView:(id)a4 secondEnrollView:(id)a5;
- (void)_enrollSkipped;
- (struct CGSize { double x0; double x1; })_idealEnrollCurveViewSize;
- (void)_updateEnrollViewsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateContentViewSizeToMatchConstraints;
- (void)_handleViewState:(unsigned long long)a0;
- (void)_forceResetCurvesLayerToPercent:(double)a0;
- (id)_detailTextDonePhase;
- (void)handleEnrollmentDoneWithPromptMessage:(id)a0;
- (void)handleEnrollmentFailure;
- (double)_enrollViewTopPadding;
- (BOOL)_showDisclaimerOnIpad;

@end

@class NSTimer, OBTrayButton, OBAnimationController, UIImageView, BKUIAnimationView, NSObject, NSLayoutConstraint, BKUIFingerPrintPosedVideoPlayerView;
@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;

@interface BKUIFingerPrintEnrollTutorialViewController : OBWelcomeController {
    NSObject<OS_os_log> *bkui_animation_view_log;
}

@property (retain, nonatomic) OBTrayButton *skipButton;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayRect;
@property (retain, nonatomic) UIImageView *enrollTutorialImageView;
@property (retain, nonatomic) OBAnimationController *animationController;
@property (retain, nonatomic) BKUIAnimationView *animationView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (retain, nonatomic) BKUIFingerPrintPosedVideoPlayerView *posedVideoPlayerView;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (weak, nonatomic) id<BKUIEmbeddedEnrollmentSelectionType> delegate;
@property (nonatomic) unsigned long long enrollViewState;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL showDisclaimer;
@property (nonatomic) BOOL showFollowUpEnrollmentUpSellContent;
@property (nonatomic) BOOL isSecondEnrollment;
@property (nonatomic) long long initialInterfaceOrientation;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (double)_contentViewHeight;
- (void)_enrollSkipped:(id)a0;
- (id)_videoAssetName;
- (double)_contentViewTopOffset;
- (void)_continuePressed:(id)a0;
- (id)_detailTextPhase1;
- (id)_devicePrefix;
- (id)_headerTitlePhase1;
- (id)_headerTitlePhase2;
- (void)_performInitialAnimationSetup;
- (void)_restartAnimation;
- (void)_setupTouchIDAnimation;
- (BOOL)_topTouchButtonIpad;
- (id)combinedTutorialText;
- (id)initInBuddy:(BOOL)a0 showDisclaimer:(BOOL)a1 displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)loadAVPlayer;
- (id)tutorialImage;
- (id)tutorialText;

@end

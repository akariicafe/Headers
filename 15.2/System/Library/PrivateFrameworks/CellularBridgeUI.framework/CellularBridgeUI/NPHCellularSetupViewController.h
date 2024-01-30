@class NSString, UIActivityIndicatorView, NSMutableSet, NSArray, SUBManager, UIBarButtonItem;
@protocol BPSSetupMiniFlowControllerDelegate;

@interface NPHCellularSetupViewController : BPSWelcomeOptinViewController <UIAdaptivePresentationControllerDelegate, BPSMiniFlowStepController> {
    BOOL _shouldHideSkipButton;
}

@property (class, retain, nonatomic) NSMutableSet *loggedEvents;

@property (nonatomic) long long type;
@property (nonatomic) BOOL haveReceivedProxyPlanItems;
@property (nonatomic) BOOL isTinkerCrossCarrierSetUpFlow;
@property (nonatomic) BOOL isCellularSetupFlowComplete;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIBarButtonItem *nextNavBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelNavBarButtonItem;
@property (retain, nonatomic) NSString *detailString;
@property (retain, nonatomic) NSString *suggestedButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSArray *userVisibleErrors;
@property (nonatomic) long long configuration;
@property (retain, nonatomic) SUBManager *subManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;

+ (BOOL)controllerNeedsToRun;
+ (void)_logEventOncePerSession:(unsigned long long)a0;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)transfer;
- (id)initWithConfiguration:(long long)a0;
- (void)presentationControllerWillDismiss:(id)a0;
- (void).cxx_destruct;
- (id)titleString;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)imageResource;
- (BOOL)wantsLightenBlendedScreen;
- (id)tapToRadarMetadata;
- (id)okayButtonTitle;
- (void)okayButtonPressed:(id)a0;
- (void)checkForSoftwareUpdate;
- (void)updateUIFromCellularPlanItems;
- (void)userTappedNext:(id)a0;
- (void)userTappedSkip:(id)a0;
- (void)updateUIToShowSpinner;
- (void)ctCellularPlanInfoDidChange:(id)a0;
- (BOOL)isGeminiSetup;
- (void)navigateToNextView;
- (void)userTappedConsent:(id)a0;
- (void)setUpNow;
- (void)updateUIToShowSetUpNowMultipleSubscriptions;
- (void)updateUIToShowPreinstall;
- (void)updateUIToShowUserConsent:(long long)a0 relevantPlan:(id)a1;
- (void)updateUIToShowContinue;
- (void)updateUIToShowUserVisibleError;
- (void)_decideWhetherToShowTransferOrSetup;
- (void)userTappedContinue:(id)a0;
- (void)userTappedSetUp:(id)a0;
- (void)userTappedTransfer:(id)a0;
- (void)userTappedSetUpNew:(id)a0;
- (void)userTappedSetUpCarrier:(id)a0;
- (id)trialOfferMessage;
- (void)updateUIToShowSetUpNow;
- (void)updateUIToShowPlanTransferOrSetUpNewOptions;
- (void)updateUIToShowPlanSetUpTrial;

@end

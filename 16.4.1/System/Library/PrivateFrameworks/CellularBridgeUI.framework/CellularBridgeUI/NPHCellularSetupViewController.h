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
@property (copy, nonatomic) NSString *detailString;
@property (copy, nonatomic) NSString *suggestedButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;
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

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithConfiguration:(long long)a0;
- (void).cxx_destruct;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)titleString;
- (void)transfer;
- (id)imageResource;
- (id)tapToRadarMetadata;
- (BOOL)wantsLightenBlendedScreen;
- (id)okayButtonTitle;
- (void)okayButtonPressed:(id)a0;
- (void)userTappedNext:(id)a0;
- (void)userTappedSkip:(id)a0;
- (void)_decideWhetherToShowTransferOrSetup;
- (id)_setUpNowDetailString;
- (void)checkForSoftwareUpdate;
- (void)ctCellularPlanInfoDidChange:(id)a0;
- (BOOL)isGeminiSetup;
- (void)navigateToNextView;
- (void)setUpNow;
- (id)trialOfferMessage;
- (void)updateUIFromCellularPlanItems;
- (void)updateUIToShowContinue;
- (void)updateUIToShowPlanSetUpTrial;
- (void)updateUIToShowPlanTransferOrSetUpNewOptions;
- (void)updateUIToShowPreinstall;
- (void)updateUIToShowSetUpNow;
- (void)updateUIToShowSetUpNowMultipleSubscriptions;
- (void)updateUIToShowSpinner;
- (void)updateUIToShowUserConsent:(long long)a0 relevantPlan:(id)a1;
- (void)updateUIToShowUserVisibleError;
- (void)userTappedConsent:(id)a0;
- (void)userTappedContinue:(id)a0;
- (void)userTappedSetUp:(id)a0;
- (void)userTappedSetUpCarrier:(id)a0;
- (void)userTappedSetUpNew:(id)a0;
- (void)userTappedTransfer:(id)a0;

@end

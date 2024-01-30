@class OBLinkTrayButton, OBTrayButton, HUPersonalRequestsEditorItemManager, NSString, VTUIEnrollTrainingViewController, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) NSString *buttonOneText;
@property (retain, nonatomic) VTUIEnrollTrainingViewController *voiceProfileVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_dontSetupVoiceProfile;
- (void)_dontSetupVoiceProfileWithWarning:(id)a0;
- (void)_resetVoiceProfileSetup;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_setupVoiceProfile:(id)a0;
- (void)_turnOffPersonalRequests;
- (void)_turnOffVoiceRecognition;
- (void)continueSetup;
- (void)dismissSetup;
- (id)hu_preloadContent;
- (Class)onboardingFlowClass;
- (void)showLearnMore;
- (void)skipSetup;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;

@end

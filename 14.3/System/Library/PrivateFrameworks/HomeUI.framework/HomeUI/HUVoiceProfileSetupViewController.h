@class OBLinkTrayButton, OBTrayButton, HUPersonalRequestsEditorItemManager, NSString, VTUIEnrollTrainingViewController, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController>

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

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)continueSetup;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_turnOffPersonalRequests;
- (void)userTappedContinueFromWarning;
- (void)userTappedCancelFromWarning;
- (void)_dontSetupVoiceProfile;
- (void)_turnOffVoiceRecognition;
- (void)_resetVoiceProfileSetup;
- (void)_dontSetupVoiceProfileWithWarning:(id)a0;
- (void)_setupVoiceProfile:(id)a0;
- (void)skipSetup;
- (void)showLearnMore;
- (void)dismissSetup;

@end

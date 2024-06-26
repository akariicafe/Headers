@class AVPlayerLooper, OBWelcomeController, UINavigationController, CNSharingProfileAvatarItemProviderConfiguration, NSString, IMCloudKitSyncState, OBWelcomeFullCenterContentController, AVTAvatarStore, OBButtonTray, CKCNSharingProfileOnboardingFlowManager, AVPlayer;
@protocol CKOnboardingControllerDelegate, AVTAvatarRecord, IMCNMeCardSharingResult;

@interface CKOnboardingController : NSObject <CNMeCardSharingPickerViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, IMCNMeCardSharingOnboardingEditViewControllerDelegate, IMCNMeCardSharingOnboardingAudienceViewControllerDelegate, UINavigationControllerDelegate, CKCNSharingProfileOnboardingFlowManagerDelegate, UIAdaptivePresentationControllerDelegate, CKSyndicationOnboardingPageViewControllerDelegate>

@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic, getter=_memojiCreationController) OBWelcomeFullCenterContentController *memojiCreationController;
@property (retain, nonatomic) AVPlayer *memojiVideoPlayer;
@property (retain, nonatomic) AVPlayerLooper *memojiVideoPlayerLooper;
@property (retain, nonatomic) AVTAvatarStore *avatarStore;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) id<IMCNMeCardSharingResult> pendingMeCardSharingResult;
@property (retain, nonatomic) CKCNSharingProfileOnboardingFlowManager *nicknameFlowManager;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic) BOOL presentingFromPrefs;
@property (nonatomic) BOOL isUserInitiatedEditNameAndPhoto;
@property (retain, nonatomic) OBWelcomeController *syndicationIntroController;
@property (retain, nonatomic) OBButtonTray *buttonTray;
@property (weak, nonatomic) id<CKOnboardingControllerDelegate> delegate;
@property (retain, nonatomic) IMCloudKitSyncState *syncState;
@property (nonatomic) int micLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)__im_ff_isInterstellarEnabled;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)flowManager:(id)a0 didFinishWithResult:(id)a1;
- (void)flowManagerDidSelectSetupLater:(id)a0;
- (id)_nicknameController;
- (void)sharingPickerDidFinish:(id)a0;
- (void)sharingPicker:(id)a0 didChangeSharingState:(BOOL)a1;
- (void)sharingPicker:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)viewIssues:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldPresentNewInMessages;
- (void)prepareForOnboarding;
- (id)_introController;
- (void)presentOnboarding:(id)a0;
- (void)_writeDefaultWhatsNewDidShow;
- (void)_beginMiCWelcomeScreen;
- (BOOL)_shouldShowNicknameOnboardingFlowOnLaunch;
- (void)startNicknameOnboardingIfNeeded;
- (BOOL)_shouldPresentMiCWelcome;
- (void)_writeDefaultMiCWelcome;
- (BOOL)_shouldShowSyndicationOnboardingFlowOnLaunch;
- (void)startSyndicationOnboardingIfNeeded;
- (BOOL)alwaysShowNicknameOnboarding;
- (BOOL)_isRunningTest;
- (BOOL)_shouldShowNicknameOnboardingFlowIgnoringVersion:(BOOL)a0;
- (unsigned long long)nicknameOnboardingLastShownVersion;
- (BOOL)alwaysShowSyndicationOnboarding;
- (BOOL)_shouldShowSyndicationOnboardingFlow;
- (BOOL)_shouldShowSyndicationOnboardingFlowIgnoringVersion:(BOOL)a0;
- (unsigned long long)syndicationOnboardingLastShownVersion;
- (id)_nameAndPhotoSharingIntroController;
- (void)_presentMemojiCreationIfNeeded:(id /* block */)a0 skipAction:(id /* block */)a1;
- (void)_fetchMemojiWithCompletionBlock:(id /* block */)a0;
- (void)pushMemojiCreationStepIfNeeded;
- (void)pushMemojiCreationStep;
- (void)pushNameAndPhotoSharingIntroStepIfNeeded;
- (id)getButtonTray;
- (long long)_whatsNewVersion;
- (void)meCardSharingOnboardingEditController:(id)a0 didFinishWithOnboardingResult:(id)a1;
- (void)prepareForSuspend;
- (void)presentMemojiSetup;
- (void)_pushOnboardingViewController:(id)a0 animated:(BOOL)a1;
- (id)contactForNicknameOnboarding;
- (void)pushNameAndPhotoSharingConfigDataStep;
- (id)_micController;
- (void)completedOnboarding;
- (void)pushNameAndPhotoSharingIntroStep;
- (void)_writeDefaultNicknameOnboardingVersion;
- (void)completedOnboardingWithCompletion:(id /* block */)a0;
- (void)pushSyndicationIntroStep;
- (void)_writeDefaultSyndicationOnboardingVersion;
- (void)enableSyndication;
- (void)setUpSyndicationLater;
- (id)_meCardSharingState;
- (void)initializeBundleIDsInAppPreferences:(BOOL)a0;
- (BOOL)_meCardSharingEnabled;
- (unsigned long long)_meCardSharingAudience;
- (id)_userDefaults;
- (long long)_whatsNewLatestShippingVersion;
- (BOOL)_readyToShowNextScreenWithTimeout:(unsigned long long)a0;
- (void)pushNameAndPhotoSharingConfigSharingPreferenceStep;
- (void)_onClickMiCOnboard;
- (void)_onClickMiCNotNow;
- (void)_beginMOCFlowForState:(id)a0 rampState:(id)a1;
- (void)_tryToEnableMOC;
- (void)reportMoCLayoutShown:(int)a0;
- (void)_tryToEnableHSA2;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (void)sharingPicker:(id)a0 didSelectNameFormat:(unsigned long long)a1;
- (BOOL)presentOnboardingIfNeeded;
- (BOOL)shouldPresentOnboarding;
- (BOOL)presentNicknameSharingSetupFlow;
- (void)presentFromPrefsPresentationController:(id)a0 resizeToFitContent:(BOOL)a1;
- (BOOL)readyToShowNextScreen;
- (unsigned long long)_meCardSharingNameFormat;
- (void)meCardSharingOnboardingAudienceViewControllerDidFinish:(id)a0 withSharingAudience:(unsigned long long)a1;
- (BOOL)accountCanCreateNickname;
- (BOOL)_shouldShowNicknameOnboardingFlow;
- (BOOL)presentNicknameSharingSetupFlowWithMemoji:(BOOL)a0 forUserInitiatedEdit:(BOOL)a1;

@end

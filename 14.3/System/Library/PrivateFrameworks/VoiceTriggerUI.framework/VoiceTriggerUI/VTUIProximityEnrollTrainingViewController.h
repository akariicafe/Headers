@class VTUISiriDataSharingOptInPresenter, VTUIProximityEnrollTrainingView, VTUIProximityEnrollmentSuccessView, VTUIAudioHintPlayer, NSObject, VTUIProximityEnrollmentSetupIntroView, VTUIProximityEnrollmentLanguageOptionsView, UIView, NSString, AFUISiriLanguage, AFMyriadCoordinator, SSRVTUITrainingManager, VTUIProximityTryAgainView, NSArray;
@protocol VTUIEnrollTrainingViewControllerDelegate, OS_dispatch_queue;

@interface VTUIProximityEnrollTrainingViewController : UIViewController <AFMyriadDelegate, AFUISiriLanguageDelegate, SSRVTUITrainingManagerDelegate, VTUIEnrollmentDelegate, VTUISiriDataSharingOptInPresentationDelegate> {
    AFUISiriLanguage *_siriLanguage;
    BOOL _hasSkippedTraining;
    BOOL _hasPHSInCloud;
    BOOL _isResignedActive;
    id /* block */ _hasPHSInCloudFetchBlock;
    NSObject<OS_dispatch_queue> *_hasPHSInCloudFetchQueue;
    NSArray *_siriLanguageOptions;
    long long _consecutiveTimeoutCount;
    UIView *_siriDataSharingProximityView;
    VTUISiriDataSharingOptInPresenter *_siriDataSharingOptInPresenter;
}

@property (retain, nonatomic) SSRVTUITrainingManager *trainingManager;
@property (readonly, nonatomic) unsigned long long sessionId;
@property (nonatomic) long long currentTrainingState;
@property (nonatomic) BOOL hasRetriedTraining;
@property (nonatomic) BOOL skipToEndForTesting;
@property (nonatomic) BOOL skipToDataSharingForTesting;
@property (nonatomic) BOOL disambiguateLanguageOptionsForTesting;
@property (retain, nonatomic) VTUIProximityEnrollTrainingView *enrollTrainingView;
@property (retain, nonatomic) VTUIProximityEnrollmentSuccessView *successView;
@property (retain, nonatomic) VTUIProximityEnrollmentSetupIntroView *introView;
@property (retain, nonatomic) VTUIProximityTryAgainView *tryAgainView;
@property (nonatomic) unsigned long long badMicRetryCount;
@property (nonatomic) unsigned long long AVVCRetryCount;
@property (retain, nonatomic) NSString *spokenLanguageCode;
@property (retain, nonatomic) VTUIProximityEnrollmentLanguageOptionsView *languageOptionsView;
@property (retain, nonatomic) UIView *aboutTappedSender;
@property (nonatomic) BOOL shouldTurnOnMyriad;
@property (retain, nonatomic) AFMyriadCoordinator *myriadCoordinator;
@property (retain, nonatomic) NSArray *trainingPageInstructions;
@property (retain, nonatomic) VTUIAudioHintPlayer *audioHintPlayer;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<VTUIEnrollTrainingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish:(id)a0;
- (void)_resignActive;
- (void)_resetIdleTimer;
- (id)init;
- (void).cxx_destruct;
- (void)_becomeActive;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)_dismiss:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)shouldContinue:(id)a0;
- (void)shouldAbortAnotherDeviceBetter:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_didEnterBackground;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)a0;
- (void)siriDataSharingOptInViewDismissButtonTappedFromPresenter:(id)a0;
- (void)viewDidLoad;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)a0;
- (void)VTUITrainingManagerFeedLevel:(float)a0;
- (void)VTUITrainingManagerStopListening;
- (BOOL)_isLocaleSupported:(id)a0;
- (void)cancelTraining;
- (void)_setLanguageOptionsAndContinue:(id)a0;
- (void)_continueFromIntro:(id)a0;
- (void)_setupMode;
- (BOOL)_isTrainingInProgress;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)a0;
- (void)_checkForPHSCloudDataIfNecessary:(id)a0;
- (void)_setupTrainingStates;
- (void)_setupEnrollTrainingView;
- (void)_showEnrollmentSuccessView;
- (BOOL)_shouldShowSiriDataSharingOptInView;
- (void)_hideTrainingElements;
- (void)_showTrainingElements;
- (void)_startEnrollment;
- (void)_showTrainingInstruction:(long long)a0 afterDelay:(double)a1 isRetry:(BOOL)a2 animate:(BOOL)a3;
- (void)_resetTrainingManager;
- (void)_resetEnrollment;
- (void)_showBadMicAlertCompletion:(id /* block */)a0;
- (void)skipTraining:(id)a0;
- (void)_showUnsupportedLocaleAlertCompletion:(id /* block */)a0;
- (void)_finishSiriSetup:(id)a0;
- (void)skipAssistant:(id)a0;
- (void)_logAggdCount:(long long)a0 forKey:(id)a1;
- (BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
- (BOOL)_shouldSpeakAudioHint;
- (void)_showUnsupportedLocaleAlert;
- (void)_showIntroView;
- (void)_setPHSEnrollmentPrefEnabled:(BOOL)a0;
- (void)_hideInstruction;
- (void)_createTrainingManagerIfNeeded;
- (void)_showInstruction:(long long)a0 isRetry:(BOOL)a1;
- (void)_logAggdScalar:(long long)a0 forKey:(id)a1;
- (void)_updatePageNumberForInstruction:(long long)a0;
- (void)_showStatusMessage:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;
- (void)_handleTrainingResultForRetryablePhraseWithStatus:(int)a0 shouldShowCheckMark:(BOOL)a1;
- (void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)a0;
- (long long)interpretSessionManagerStatus:(int)a0 forInstruction:(long long)a1;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)a0 status:(long long)a1;
- (void)_retryAfterBadMicAlert;
- (void)_advanceState;
- (void)_animateCheckMark:(BOOL)a0 completion:(id /* block */)a1;
- (void)_retryInstruction:(BOOL)a0;
- (id)interpretAudioSource:(unsigned long long)a0;
- (id)_getSetupModeString;
- (void)_cleanupHelper;
- (void)_setAssistantEnabled:(BOOL)a0;
- (void)_continueFromLanguageOptions:(id)a0;
- (void)_warnForLanguageCompatibilityIfNecessary:(id /* block */)a0;
- (BOOL)_hasPHSCloudDataForSpokenLanguage;
- (void)_startTraining;
- (void)_presentRadarView;
- (void)aboutTapped:(id)a0;
- (void)_showBadMicAlertWithCompletion:(id /* block */)a0;
- (void)_clearAggdScalar:(id)a0;
- (void)_showSiriDataSharingOptInView;
- (void)_updateCurrentConstraintsToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_resumeTraining;
- (void)_autoContinueFromRetry:(BOOL)a0;
- (void)setupNavigationBarStyleForAppearing:(BOOL)a0;

@end

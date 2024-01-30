@interface HUHomeFeatureOnboardingUtilities : NSObject

+ (void)initialize;
+ (id)_checkIdentifyVoicePrerequisitesForHome:(id)a0;
+ (BOOL)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)a0;
+ (id)_fetchSupportedMultiUserLanguagesSynchronously;
+ (void)_initializeSiriLanguageOptionsManagerIfNecessaryForHomePods:(id)a0;
+ (BOOL)_userHasSaidYesToShowTVViewingProfilesIn:(id)a0;
+ (id)analyzeHomeAssistantDevicesForSupportedVoiceRecognitionLanguages:(id)a0 home:(id)a1;
+ (id)atLeastOneHomePodHasLanguageSettingsForHomeFuture:(id)a0;
+ (id)checkVoiceProfileAvailabiltyForLanguage:(id)a0;
+ (id)createPersonalIdentityDeviceLanguageMismatchList:(id)a0;
+ (id)fetchSupportedVoiceRecognitionLanguages;
+ (void)fetchSupportedVoiceRecognitionLanguagesWithCompletion:(id /* block */)a0;
+ (id)groupedFeaturesForOnboardingFlowKeyPaths:(id)a0;
+ (BOOL)hasUserSaidYesToVoiceIdentificationInResults:(id)a0;
+ (unsigned long long)home:(id)a0 checkForMultiUserDeviceUpgradeRequirements:(id)a1;
+ (unsigned long long)home:(id)a0 checkForOwnerUpgradeRequirementsFromResults:(id)a1;
+ (id)home:(id)a0 createMultiUserLanguageToHomePodsMapping:(id)a1;
+ (BOOL)home:(id)a0 hasSomeHomePodsOnSupportedVoiceRecognitionLanguages:(id)a1;
+ (id)home:(id)a0 onboardAllFeaturesFromPresentingViewController:(id)a1 usageOptions:(id)a2;
+ (id)home:(id)a0 onboardFeaturesForKeyPaths:(id)a1 presentingViewController:(id)a2 usageOptions:(id)a3;
+ (id)home:(id)a0 onboardHomeHub2FromPresentingViewController:(id)a1 devices:(id)a2 usageOptions:(id)a3;
+ (id)home:(id)a0 onboardIdentifyVoiceFromPresentingViewController:(id)a1 usageOptions:(id)a2;
+ (id)home:(id)a0 onboardPersonalRequestsFromPresentingViewController:(id)a1;
+ (id)home:(id)a0 processHomeFeatureOnboarderResults:(id)a1;
+ (BOOL)home:(id)a0 voiceRecognitionIsSupportedForCurrentUserOnMediaAccessory:(id)a1 languageOption:(id)a2;
+ (BOOL)isDeviceUsingASupportedVoiceRecognitionSiriLanguage:(id)a0 shouldFallbackToBestSupportedLanguage:(BOOL)a1;
+ (BOOL)isVoiceProfileAvailableOnThisDeviceForLanguage:(id)a0;
+ (void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)a0;
+ (void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)a0;
+ (id)processLanguageAndMediaProfileInfo:(id)a0;

@end

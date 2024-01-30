@class NSString, HDUserCharacteristicsManager, HKWristDetectionSettingManager, NSObject, NSUserDefaults;
@protocol HDHRCardioFitnessOnboardingCompletionRegionSupportedDeterminer, OS_dispatch_queue, HDFeatureAvailabilityExtension;

@interface HKHRCardioFitnessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKWristDetectionSettingManagerObserver, HKHRCardioFitnessFeatureStatusManagerServerInterface> {
    id<HDHRCardioFitnessOnboardingCompletionRegionSupportedDeterminer> _regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> _featureAvailabilityExtension;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_heartRateSettingsDefaults;
    NSUserDefaults *_privacyDefaults;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HKWristDetectionSettingManager *_wristDetectionSettingManager;
    BOOL _observing;
    int _privacyPreferencesNotificationToken;
    int _userCharacteristicsNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)dealloc;
- (void)remote_stopObservingChanges;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (BOOL)_isWristDetectEnabled;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_clientRemoteObjectProxy;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)a0;
- (void)remote_notificationStatusWithCompletion:(id /* block */)a0;
- (void)remote_setNotificationsEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_stopObservingChanges;
- (id)_getOnboardingStatusWithError:(id *)a0;
- (BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)a0;
- (BOOL)_isCardioFitnessClassificationAvailable;
- (BOOL)_isAgeGated;
- (BOOL)_doesActiveWatchSupportFeature;
- (BOOL)_isHeartRateEnabled;
- (BOOL)_isHealthAppHidden;
- (BOOL)_isAgePresent;
- (id)_getNotificationStatusWithError:(id *)a0;
- (BOOL)_isOnboardedFeatureSupportedOnBothPhoneAndWatch;
- (void)_heartRateSettingsSynced;
- (void)_userCharacteristicsChanged;
- (void)_notifyClientChangesToOnboardingStatus:(BOOL)a0 changesToNotificationStatus:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 featureAvailabilityExtension:(id)a4 regionSupportedDeterminer:(id)a5 ageGatingDefaults:(id)a6 heartRateSettingsDefaults:(id)a7 privacyDefaults:(id)a8 userCharacteristicsManager:(id)a9 wristDetectionSettingManager:(id)a10;

@end

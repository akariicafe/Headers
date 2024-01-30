@class HKWatchAppInstallationManager, NSString, HDUserCharacteristicsManager, HKWristDetectionSettingManager, NSObject, NSUserDefaults;
@protocol HDFeatureAvailabilityExtension, OS_dispatch_queue, HDHRRegionSupportedDeterminer;

@interface HKHRCardioFitnessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKWristDetectionSettingManagerObserver, HKWatchAppInstallationManagerObserver, HKHRCardioFitnessFeatureStatusManagerServerInterface> {
    id<HDHRRegionSupportedDeterminer> _regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> _featureAvailabilityExtension;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_heartRateSettingsDefaults;
    NSUserDefaults *_privacyDefaults;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HKWristDetectionSettingManager *_wristDetectionSettingManager;
    HKWatchAppInstallationManager *_watchAppInstallationManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _observing;
    int _privacyPreferencesNotificationToken;
    int _userCharacteristicsNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)_getOnboardingStatusWithError:(id *)a0;
- (BOOL)_isHealthAppHidden;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (BOOL)_isAgeGated;
- (id)exportedInterface;
- (void)_userCharacteristicsChanged;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)a0;
- (id)_isAgePresentWithError:(id *)a0;
- (id)_getNotificationStatusWithError:(id *)a0;
- (void)dealloc;
- (void)_notifyClientChangesToOnboardingStatus:(BOOL)a0 changesToNotificationStatus:(BOOL)a1;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)remote_setNotificationsEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_stopObservingChangesAndExpectToBeObserving:(BOOL)a0;
- (BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)a0;
- (id)_clientRemoteObjectProxy;
- (void)remote_stopObservingChanges;
- (void)remote_notificationStatusWithCompletion:(id /* block */)a0;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void).cxx_destruct;
- (void)watchAppInstallationManagerDidObserveChange:(id)a0;
- (BOOL)_doesActiveWatchSupportFeature;
- (void)_heartRateSettingsSynced;
- (id)_isCardioFitnessClassificationAvailableWithError:(id *)a0;
- (BOOL)_isHeartRateEnabled;
- (BOOL)_isOnboardedFeatureSupportedOnBothPhoneAndWatch;
- (BOOL)_isWatchAppInstalled;
- (BOOL)_isWristDetectEnabled;
- (BOOL)_requiresMedicationDetailsConfirmation;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 featureAvailabilityExtension:(id)a4 regionSupportedDeterminer:(id)a5 ageGatingDefaults:(id)a6 heartRateSettingsDefaults:(id)a7 privacyDefaults:(id)a8 userCharacteristicsManager:(id)a9 wristDetectionSettingManager:(id)a10 watchAppInstallationManager:(id)a11;

@end

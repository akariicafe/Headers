@class NSString, HDUserCharacteristicsManager, HDDataCollectionManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HDMobilityIsHeightPresentProvider, HDMobilityRegionSupportedDeterminer, HDFeatureAvailabilityExtension;

@interface HDMobilityWalkingSteadinessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface> {
    id<HDMobilityRegionSupportedDeterminer> _regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> _classificationsFeatureAvailabilityExtension;
    id<HDFeatureAvailabilityExtension> _notificationsFeatureAvailabilityExtension;
    id<HDMobilityIsHeightPresentProvider> _isHeightPresentProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_mobilitySettingsDefaults;
    HDDataCollectionManager *_dataCollectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    BOOL _observing;
    int _userCharacteristicsNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (BOOL)_isAgePresent;
- (BOOL)_isDeviceSupported;
- (BOOL)_isWalkingSteadinessClassificationAvailableWithError:(id *)a0;
- (void)_userCharacteristicsChanged;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (BOOL)_isFitnessTrackingEnabled;
- (void)_stopObservingChangesAndExpectToBeObserving:(BOOL)a0;
- (void)remote_fitnessTrackingEnabledWithCompletion:(id /* block */)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 classificationsFeatureAvailabilityExtension:(id)a4 notificationsFeatureAvailabilityExtension:(id)a5 regionSupportedDeterminer:(id)a6 ageGatingDefaults:(id)a7 mobilitySettingsDefaults:(id)a8 userCharacteristicsManager:(id)a9 isHeightPresentProvider:(id)a10;
- (void).cxx_destruct;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)remote_notificationStatusWithCompletion:(id /* block */)a0;
- (void)_fitnessTrackingEnabledChanged;
- (void)_notifyClientChangesToOnboardingStatus:(BOOL)a0 changesToNotificationStatus:(BOOL)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (id)exportedInterface;
- (void)dealloc;
- (BOOL)_isOnboardedFeatureSupported;
- (id)_clientRemoteObjectProxy;
- (BOOL)_isHealthAppHidden;
- (void)remote_stopObservingChanges;
- (BOOL)_isAgeGated;
- (BOOL)_isHeightPresent;
- (id)_getNotificationStatusWithError:(id *)a0;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)a0;
- (id)_getOnboardingStatusWithError:(id *)a0;
- (BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)a0;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)remote_setNotificationsEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;

@end

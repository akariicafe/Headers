@class NSMutableDictionary, HKNanoRegistryPairingAndSwitchingNotificationDataSource;

@interface HKWatchAppInstallationDataSource : HKObserverBridge

@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;
@property (readonly, nonatomic) NSMutableDictionary *watchAppInstallationManagersByBundleIdentifier;

- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_populateManagersDictionaryForBundleIdentifier:(id)a0;
- (id)initWithDevicePairingAndSwitchingNotificationDataSource:(id)a0;
- (id)watchAppInstallationManagerForBundleIdentifier:(id)a0;

@end

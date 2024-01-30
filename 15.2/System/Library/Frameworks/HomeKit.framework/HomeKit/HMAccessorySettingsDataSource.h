@class NSString, HMAccessorySettingsMessenger, NSMutableDictionary, HMAccessorySettingsMetricsDispatcher, _HMContext, NSObject, HMCacheManager, HMLocalization;
@protocol HMAccessorySettingsDataSourceDelegate, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, OS_dispatch_queue, HMESubscriptionProviding;

@interface HMAccessorySettingsDataSource : NSObject <HMEEventConsumer, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMAccessorySettingsMessenger *_messenger;
}

@property (readonly) HMLocalization *localizationManager;
@property (readonly) id<HMESubscriptionProviding> eventSubscriptionProvider;
@property (readonly) NSMutableDictionary *cacheMap;
@property (readonly) HMCacheManager *cacheManager;
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMAccessorySettingsDataSourceDataSource> dataSource;
@property (readonly) _HMContext *context;
@property (readonly) id<HMAccessorySettingsMessengerFactory> messengerFactory;
@property (weak) id<HMAccessorySettingsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultLanguageValue;

- (id)initWithContext:(id)a0 localizationManager:(id)a1 messengerFactory:(id)a2 subscriptionProvider:(id)a3 cacheManager:(id)a4 metricsDispatcher:(id)a5;
- (void)_cacheSettingsToDisk:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)cacheForHomeUUID:(id)a0 accessoryUUID:(id)a1;
- (id)dataSourceHomeWithHomeIdentifier:(id)a0;
- (id)accessoryUUIDForIdentifier:(id)a0 homeIdentifier:(id)a1;
- (id)_settingsFromCache:(id)a0 forKeyPaths:(id)a1;
- (id)readAccessorySettingsFromCache:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 keyPaths:(id)a3;
- (void)subscribeToAccessorySettingsWithAccessoryIdentifier:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)_loadCacheForHomeUUID:(id)a0 accessoryUUID:(id)a1;
- (void)fetchAccessorySettingsWithAccessoryIdentifier:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchCachedAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (void)unsubscribeToAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (id)homeUUIDForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)localizationKeyForKeyPath:(id)a0;
- (void)notifyDelegateDidReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (void)setCache:(id)a0 forHomeUUID:(id)a1 accessoryUUID:(id)a2;
- (void)_loadCacheIfNeededHomeUUID:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (void)_didReceiveEvent:(id)a0 topic:(id)a1;
- (void)fetchAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (void)subscribeToAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)localizedTitleForKeyPath:(id)a0;
- (id)messengerWithHomeUUID:(id)a0;
- (void)_saveSettings:(id)a0 toCache:(id)a1;
- (void)dealloc;
- (void)_cacheSettings:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;
- (id)defaultSettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2;
- (void)subscribeToAccessorySettingsOnDaemonWithHomeUUID:(id)a0 accessoryUUID:(id)a1 keyPaths:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end

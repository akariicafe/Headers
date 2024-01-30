@class NSString, _HMContext, HMAccessorySettingsMessenger, HMLocalization, HMAccessorySettingsMetricsDispatcher, NSObject;
@protocol OS_dispatch_queue, HMAccessorySettingsMessengerFactory, HMAccessorySettingsDataSourceDataSource, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, HMAccessorySettingsDataSourceDelegate, HMESubscriptionProviding;

@interface HMAccessorySettingsDataSource : NSObject <HMEEventConsumer, HMFLogging, HMELastEventStoreWriter> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMAccessorySettingsMessenger *_messenger;
    HMLocalization *_localizationManager;
    id<HMESubscriptionProviding> _eventSubscriptionProvider;
    HMAccessorySettingsMetricsDispatcher *_metricsDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMELastEventStoreReadHandle> _lastEventStoreReadHandle;
    id<HMELastEventStoreWriteHandle> _lastEventStoreWriteHandle;
}

@property (weak) id<HMAccessorySettingsDataSourceDataSource> dataSource;
@property (readonly) _HMContext *context;
@property (readonly, weak) id<HMAccessorySettingsMessengerFactory> messengerFactory;
@property (weak) id<HMAccessorySettingsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultLanguageValue;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)subscribeToAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)fetchAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithContext:(id)a0 localizationManager:(id)a1 messengerFactory:(id)a2 subscriptionProvider:(id)a3 lastEventStoreReadHandle:(id)a4 lastEventStoreWriteHandle:(id)a5 metricsDispatcher:(id)a6;
- (id)localizedTitleForKeyPath:(id)a0;
- (void)dealloc;
- (void)subscribeToMediaSystemSettingsWithHomeIdentifier:(id)a0 mediaSystemIdentifier:(id)a1 keyPaths:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)unsubscribeToMediaSystemSettingsWithHomeIdentifier:(id)a0 mediaSystemIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (void)unsubscribeToAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;
- (void)resetSubscriptions;
- (void)fetchAccessorySettingsWithAccessoryIdentifier:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeToAccessorySettingsWithAccessoryIdentifier:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)defaultSettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2;
- (void).cxx_destruct;
- (void)fetchCachedAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;

@end

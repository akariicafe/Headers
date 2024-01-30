@class _HMContext, NSString, NSObject;
@protocol HMAccessoryInfoDataProviderDataSource, HMAccessoryInfoDataProviderDelegate, OS_dispatch_queue, HMESubscriptionProviding;

@interface HMAccessoryInfoDataProvider : NSObject <HMEEventConsumer, HMFLogging>

@property (readonly) id<HMESubscriptionProviding> eventSubscriptionProvider;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) _HMContext *context;
@property (weak) id<HMAccessoryInfoDataProviderDataSource> dataSource;
@property (weak) id<HMAccessoryInfoDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (void)_didReceiveEvent:(id)a0 topic:(id)a1;
- (id)accessoryUUIDForIdentifier:(id)a0 homeIdentifier:(id)a1;
- (void)configureWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 accessoryInfoTypes:(unsigned long long)a2 dataProviderDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)dataSourceHomeWithHomeIdentifier:(id)a0;
- (id)homeUUIDForIdentifier:(id)a0;
- (id)initWithContext:(id)a0 subscriptionProvider:(id)a1;
- (void)notifyDelegateDidReceiveAccountInfoUpdatesForAccessoryWithIdentifier:(id)a0 accountInfo:(id)a1;
- (void)notifyDelegateDidReceiveAccountInfoUpdatesForAccessoryWithIdentifier:(id)a0 primaryUserInfo:(id)a1;
- (void)notifyDelegateDidReceiveWifiNetworkInfoUpdatesForAccessoryWithIdentifier:(id)a0 wifiNetworkInfo:(id)a1;
- (void)subscribeToAccessoryInfoWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 accessoryInfoTypes:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)unsubscribeToAccessoryInfoWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 accessoryInfoTypes:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end

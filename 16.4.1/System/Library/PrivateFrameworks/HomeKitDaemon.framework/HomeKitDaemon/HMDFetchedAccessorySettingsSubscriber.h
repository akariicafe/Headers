@class NSString, NSMutableDictionary, NSArray, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMESubscriptionProviding, HMDFetchedAccessorySettingsSubscriberDelegate;

@interface HMDFetchedAccessorySettingsSubscriber : NSObject <HMEEventConsumer, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_cachedSettings;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMESubscriptionProviding> _subscriptionProvider;
    NSArray *_keyPaths;
    NSUUID *_homeUUID;
}

@property (weak) id<HMDFetchedAccessorySettingsSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)cachedSettingForAccessory:(id)a0 keyPath:(id)a1;
- (id)initWithWorkQueue:(id)a0 subscriptionProvider:(id)a1 keyPaths:(id)a2 homeUUID:(id)a3;
- (void)subscribeToSettingsForAccessoryUUIDs:(id)a0;
- (void)unsubscribeForAccessory:(id)a0;
- (void)unsubscribeToAllAccessories;

@end

@class NSString, ASDServiceBroker, NSPredicate, NSMutableDictionary, ASDAppQueryExecutor, NSObject, ASDNotificationCenter, NRDevice;
@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _hasRunOnce;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<ASDAppQueryResultsObserver> _observer;
    ASDAppQueryExecutor *_queryExecutor;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NRDevice *_device;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id<ASDAppQueryResultsObserver> observer;
@property (nonatomic) long long queryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryForBeagleApps;
+ (id)queryForSystemAppsOnPairedDevice:(id)a0;
+ (id)queryWithPredicate:(id)a0;
+ (id)queryForStoreApps;
+ (id)queryForBetaApps;
+ (id)queryWithPredicate:(id)a0 onPairedDevice:(id)a1;
+ (id)queryForUpdates;
+ (id)queryForBetaAppsOnPairedDevice:(id)a0;
+ (id)queryForStoreItemIDs:(id)a0;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryForBundleAtPath:(id)a0;
+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)queryForBundleIDs:(id)a0;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForAlmondApps;

- (void)_unitTest_setHasRunOnce:(BOOL)a0;
- (id)initWithPredicate:(id)a0;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void)dealloc;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;
- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 onPairedDevice:(id)a1;

@end

@class AMSEngagementConnection, NSString, NSMapTable, NSNotificationCenter, AMSBagKeySet, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSEngagement : NSObject <AMSBagConsumer> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_notifyQueue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSMapTable *observerInfo;
@property (retain, nonatomic) NSMutableSet *runningPromises;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) AMSEngagementConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_connection;

- (id)sync;
- (id)syncMetricsIdentifiers;
- (id)enqueueEvent:(id)a0;
- (id)syncDestinations:(id)a0;
- (id)_createCombinedLogKey;
- (void)_connectionErrorNotification;
- (id)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (void)_manageRunningPromise:(id)a0;
- (void)_removeRunningPromise:(id)a0;
- (void)_pushEventReceieved:(id)a0;
- (void)handleDialogResult:(id)a0;
- (void)handlePushEvent:(id)a0;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (void)dealloc;
- (void)_observeNotifications;
- (void)_handleServiceResponse:(id)a0;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (id)treatmentStoreService;
- (id)init;
- (id)enqueueData:(id)a0;
- (id)_parseActions:(id)a0;
- (id)initWithBag:(id)a0;
- (id)enqueueMessageEvent:(id)a0;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void).cxx_destruct;

@end

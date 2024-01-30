@class AMSEngagementConnection, NSMapTable, NSNotificationCenter, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSEngagement : NSObject

@property (class, readonly) NSNotificationCenter *notificationCenter;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_notifyQueue;

@property (retain, nonatomic) AMSEngagementConnection *connection;
@property (retain, nonatomic) NSMapTable *observerInfo;
@property (retain, nonatomic) NSMutableSet *runningPromises;

+ (id)_connection;

- (id)sync;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (id)syncMetricsIdentifiers;
- (void)handlePushEvent:(id)a0;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)_manageRunningPromise:(id)a0;
- (id)enqueueData:(id)a0;
- (id)enqueueEvent:(id)a0;
- (void)handleDialogResult:(id)a0;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (void)_removeRunningPromise:(id)a0;
- (void)_handleServiceResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_parseActions:(id)a0;
- (void)_pushEventReceieved:(id)a0;
- (void)_connectionErrorNotification;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)dealloc;
- (void)_observeNotifications;
- (id)enqueueMessageEvent:(id)a0;
- (id)_createCombinedLogKey;

@end

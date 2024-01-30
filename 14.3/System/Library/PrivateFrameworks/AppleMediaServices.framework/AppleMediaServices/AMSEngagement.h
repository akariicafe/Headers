@class NSMutableSet, AMSEngagementConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AMSEngagement : NSObject

@property (retain, nonatomic) AMSEngagementConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *runningPromises;

+ (id)_connection;
+ (id)_connectionQueue;

- (id)sync;
- (id)init;
- (void).cxx_destruct;
- (void)_connectionErrorNotification;
- (void)_manageRunningPromise:(id)a0;
- (id)enqueueData:(id)a0;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (id)_parseActions:(id)a0;
- (void)_removeRunningPromise:(id)a0;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (id)_createCombinedLogKey;

@end

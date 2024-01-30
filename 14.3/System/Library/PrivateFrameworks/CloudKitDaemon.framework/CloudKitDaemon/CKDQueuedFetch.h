@class NSDate, NSString, CKDOperation, NSMutableDictionary, NSOperationQueue, NSObject, CKDClientContext, NSMutableSet;
@protocol OS_dispatch_queue, OS_os_activity;

@interface CKDQueuedFetch : NSObject

@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (retain, nonatomic) NSMutableDictionary *completionHandlersByItemID;
@property (nonatomic) unsigned long long lastCompletionHandlerCount;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (weak, nonatomic) CKDClientContext *context;
@property (weak, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) long long highestQOS;
@property (retain, nonatomic) NSString *runningOperationID;
@property (retain, nonatomic) NSMutableSet *dependentOperationIDs;
@property (retain, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID;
@property (retain, nonatomic) NSMutableDictionary *unitTestOverrides;
@property (retain, nonatomic) CKDOperation *initialOperation;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) NSDate *queuedDate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) CKDQueuedFetch *equivalentRunningFetch;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)allItemIDs;
- (id)description;
- (void)start;
- (void)createFetchOperationForItemIDs:(id)a0 operationQueue:(id)a1 operationConfigurationBlock:(id /* block */)a2;
- (void)addCallbackForItemWithID:(id)a0 operation:(id)a1 callback:(id /* block */)a2;
- (void)performCallbacksForItemWithID:(id)a0 withItem:(id)a1 error:(id)a2;
- (id)callbacksForItemWithID:(id)a0;
- (void)removeCallbacksForItemWithID:(id)a0;
- (void)finishFetchOperationWithError:(id)a0;
- (int)numberOfCallbacks;
- (id)initWithOperation:(id)a0 context:(id)a1 operationQueue:(id)a2;
- (void)cancelFetchOperation;
- (BOOL)canBeUsedForOperation:(id)a0;
- (BOOL)canBeUsedForPendingFetch:(id)a0;
- (BOOL)dependentOperationListContainsRunningFetch:(id)a0;
- (BOOL)dependentOperationListContainsOperationID:(id)a0;

@end

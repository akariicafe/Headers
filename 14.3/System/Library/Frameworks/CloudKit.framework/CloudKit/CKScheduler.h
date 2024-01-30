@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *handlersByCKActivityIdentifier;
@property (copy, nonatomic) NSNumber *fakeDeviceCount;

+ (id)baseCoreAnalyticsEventPayloadForActivity:(id)a0 xpcActivityCriteria:(id)a1;
+ (const char *)xpcActivityPriorityForPriority:(long long)a0 deviceCount:(long long)a1;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;
+ (double)gracePeriodForPriority:(long long)a0 deviceCount:(long long)a1;
+ (id)sharedScheduler;
+ (BOOL)shouldReportAnalyticsForActivity:(id)a0;
+ (const char *)stringForDeviceCount:(long long)a0;
+ (id)activityFromXPCActivity:(id)a0;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;

- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_submitActivity:(id)a0 withCriteria:(id)a1;
- (void)unregisterActivityIdentifier:(id)a0;
- (void)getDeviceCountForActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitActivity:(id)a0;
- (void)registerXPCActivityWithCKActivityIdentifier:(id)a0 criteria:(id)a1;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (id)_init;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (void)populateCriteria:(id)a0 withAdditionalCriteriaFromActivity:(id)a1;
- (void)runActivityWithIdentifier:(id)a0 xpcActivity:(id)a1;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)activityForActivityIdentifier:(id)a0;

@end

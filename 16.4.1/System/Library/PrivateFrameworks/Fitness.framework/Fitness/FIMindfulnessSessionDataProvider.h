@class HKHealthStore, HKSortedSampleArray, NSObject, HKAnchoredObjectQuery;
@protocol OS_dispatch_queue;

@interface FIMindfulnessSessionDataProvider : NSObject {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HKSortedSampleArray *_mindfulnessSessions;
    HKAnchoredObjectQuery *_mindfulnessSessionsQuery;
}

- (id)initWithHealthStore:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_createMindfulnessSessionsQueryWithRetryCount:(long long)a0;
- (void)_queue_retryMindfulSessionQueryWithRetryCount:(long long)a0;
- (void)_queue_startMindfulnessSessionQueryWithRetryCount:(long long)a0;
- (void)_queue_stopMindfulSessionQuery;
- (void)allMindfulnessSessionsWithCompletion:(id /* block */)a0;
- (void)startMindfulnessSessionQueryIfNeeded;

@end

@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VUIConcurrentEvaluator : NSObject {
    NSMutableArray *_orderedKeys;
    NSMutableDictionary *_fetchers;
    NSMutableDictionary *_getters;
    long long _activeFetchCount;
    long long _numberOfSchedulingLocksAcquired;
    NSObject<OS_dispatch_semaphore> *_schedulingLock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long concurrencyCount;

+ (id)idleEvaluator;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 concurrencyCount:(long long)a1;
- (id /* block */)_getterForKey:(id)a0;
- (void)_insertFetcher:(id /* block */)a0 getter:(id /* block */)a1 forKey:(id)a2;
- (id /* block */)_removeFetcherForKey:(id)a0;
- (void)_scheduleFetchRelayed:(BOOL)a0;
- (void)addEvaluationBlock:(id /* block */)a0 forKey:(id)a1;
- (void)lockSchedulingForEvaluation:(id /* block */)a0;

@end

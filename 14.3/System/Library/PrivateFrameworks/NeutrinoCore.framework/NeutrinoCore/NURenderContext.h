@class NSArray, NSPointerArray, NURenderNode, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderContext : NSObject {
    NSPointerArray *_jobs;
    NSMutableArray *_rateLimitedJobs;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSArray *jobs;
@property (readonly) long long jobCount;
@property (retain) NURenderNode *lastPrepareNode;
@property (retain) NURenderNode *lastRenderNode;
@property unsigned long long nextRenderTime;
@property double minimumRenderInterval;
@property (nonatomic) BOOL shouldCoalesceUpdates;
@property (readonly, nonatomic) long long purpose;

- (void)cancelAllRequests;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPurpose:(long long)a0;
- (id)debugDescription;
- (void)addJob:(id)a0;
- (void)removeJob:(id)a0;
- (void)_removeJob:(id)a0;
- (void)_jobFinished:(id)a0;
- (void)_cancelAllJobs;
- (void)cancelAllJobs;
- (void)enqueueRateLimitedJob:(id)a0;
- (void)_enqueueRateLimitedJob:(id)a0;
- (id)dequeueRateLimitedJob;
- (id)_dequeueRateLimitedJob;
- (void)updateNextRenderTimeFromTime:(unsigned long long)a0;

@end

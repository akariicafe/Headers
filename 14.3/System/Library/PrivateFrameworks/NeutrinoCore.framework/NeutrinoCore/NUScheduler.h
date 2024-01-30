@class NUJobQueue, NSMutableSet, NUScheduledQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NUScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobQueue *_prepareQueue;
    NUJobQueue *_renderQueue;
    NUJobQueue *_completeQueue;
    NSMutableSet *_scheduledContextWakeups;
    NUScheduledQueue *_rateLimiterQueue;
}

+ (id)sharedScheduler;

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)submitRequests:(id)a0 withGroup:(id)a1;
- (id)_queueForStage:(long long)a0;
- (void)_enqueueJobsForRequests:(id)a0 withGroup:(id)a1;
- (void)_wakeupRateLimitJobForContext:(id)a0;
- (void)_scheduleRateLimitWakeupForContext:(id)a0;
- (void)_observeRenderJob:(id)a0 withGroup:(id)a1;
- (void)_enqueueDependentJobsForRenderJob:(id)a0;
- (void)_resumeRenderJob:(id)a0;
- (void)_enqueueRenderJob:(id)a0 toStage:(long long)a1;
- (void)cancelJobsForRenderContext:(id)a0;
- (BOOL)_prepareNewJob:(id)a0 at:(unsigned long long)a1;
- (BOOL)_coalesceJobs:(id)a0;

@end

@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList;

@interface BWInferenceSchedulerFramebuffer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } framebufferLock;
    _Atomic int failedJobStatus;
}

@property (readonly, nonatomic) BWInferenceSchedulerJobList *jobs;
@property (readonly, nonatomic) BWInferenceSchedulerGraph *graph;

- (void)dealloc;
- (void)resetJobStatesWithPreventionBlock:(id /* block */)a0;
- (id)initWithGraph:(id)a0 jobList:(id)a1;

@end

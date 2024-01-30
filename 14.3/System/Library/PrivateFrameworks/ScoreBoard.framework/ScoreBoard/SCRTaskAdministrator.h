@class NSString, SCRTaskScheduler, NSMutableDictionary, SCRApprovalCoordinator, NSObject;
@protocol OS_dispatch_queue;

@interface SCRTaskAdministrator : NSObject <SCRTaskSchedulerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    SCRTaskScheduler *_scheduler;
    SCRApprovalCoordinator *_approvalCoordinator;
    NSMutableDictionary *_taskForIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetQueue:(id)a0;
- (id)init;
- (void)submitTask:(id)a0;
- (void).cxx_destruct;
- (void)unregisterGovernor:(id)a0;
- (void)registerGovernor:(id)a0;
- (void)scheduler:(id)a0 beginSchedulingWindowOnBehalfOfTasks:(id)a1;
- (void)cancelTaskWithIdentifier:(id)a0;

@end

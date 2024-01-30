@class NSError, NSString, SCRStateMachine, SCRTask, SCRApprovalCoordinator, SCRSchedulingConfiguration;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable> {
    id _context;
    NSError *_error;
}

@property (readonly, nonatomic) SCRTask *task;
@property (readonly, nonatomic) SCRStateMachine *stateMachine;
@property (readonly, nonatomic) SCRApprovalCoordinator *approvalCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) SCRSchedulingConfiguration *schedulingConfiguration;

+ (id)validStateTransitions;
+ (id)descriptionForState:(unsigned long long)a0;

- (void)perform;
- (void)_start;
- (void).cxx_destruct;
- (void)handleStateTransition:(id)a0;
- (void)_teardownSharedContext;
- (void)_performTask;
- (void)_completeTask;
- (void)_complete;
- (void)_setupSharedContext;
- (void)_requestApproval;
- (id)initWithTask:(id)a0 approvalCoordinator:(id)a1;

@end

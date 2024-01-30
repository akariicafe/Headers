@class NSString, BSMachPortTaskNameRight, RBSProcessIdentity, BSProcessHandle;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding> {
    BSProcessHandle *_handle;
    RBSProcessIdentity *_identity;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, retain, nonatomic) BSProcessHandle *handle;
@property (readonly, retain, nonatomic) RBSProcessIdentity *identity;
@property (readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentProcess;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_initForCurrentProcess;
- (void)_terminateWithRequest:(id)a0 forWatchdog:(id)a1;
- (BOOL)_watchdog:(id)a0 shouldTerminateWithDeclineReason:(out id *)a1;
- (id)_watchdog:(id)a0 terminationRequestForViolatedProvision:(id)a1 error:(id)a2;

@end

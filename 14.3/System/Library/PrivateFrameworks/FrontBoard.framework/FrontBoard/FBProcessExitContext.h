@class FBSProcessTerminationRequest, NSString, FBProcessState, FBProcessWatchdogEventContext, NSError, RBSProcessExitContext;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) FBSProcessTerminationRequest *terminationRequest;
@property (retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext;
@property (copy, nonatomic) FBProcessState *stateBeforeExiting;
@property (nonatomic) long long terminationReason;
@property (readonly, nonatomic) unsigned long long exitReason;
@property (readonly, nonatomic) NSError *launchError;
@property (readonly, nonatomic) RBSProcessExitContext *underlyingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForExitReason:(unsigned long long)a0;

- (id)initWithLaunchError:(id)a0 underlyingContext:(id)a1;
- (int)exitCode;
- (int)terminationSignal;
- (void).cxx_destruct;
- (BOOL)fairPlayFailure;
- (long long)exitStatus;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)createError;
- (BOOL)consideredJetsam;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)exitedNormally;
- (id)succinctDescriptionBuilder;
- (id)initWithUnderlyingContext:(id)a0;

@end

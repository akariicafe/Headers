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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)createError;
- (id)succinctDescriptionBuilder;
- (BOOL)consideredJetsam;
- (long long)exitStatus;
- (int)terminationSignal;
- (BOOL)fairPlayFailure;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithUnderlyingContext:(id)a0;
- (BOOL)exitedNormally;
- (int)exitCode;
- (id)initWithLaunchError:(id)a0 underlyingContext:(id)a1;
- (void).cxx_destruct;

@end

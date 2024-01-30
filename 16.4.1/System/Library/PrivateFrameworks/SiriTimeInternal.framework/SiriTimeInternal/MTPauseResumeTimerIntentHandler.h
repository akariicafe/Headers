@class NSString;

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmPauseTimer:(id)a0 completion:(id /* block */)a1;
- (void)confirmResumeTimer:(id)a0 completion:(id /* block */)a1;
- (void)handlePauseTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleResumeTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolvePauseMultipleForPauseTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveResumeMultipleForResumeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTargetTimerForPauseTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTargetTimerForResumeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handlePauseTimer:(id)a0 dryRun:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleResumeTimer:(id)a0 dryRun:(BOOL)a1 completion:(id /* block */)a2;
- (id)_responseToPauseTimerIntent:(id)a0 withPausedTimers:(id)a1 error:(id)a2 dryRun:(BOOL)a3;
- (id)_responseToResumeTimerIntent:(id)a0 withResumedTimers:(id)a1 error:(id)a2 dryRun:(BOOL)a3;

@end

@class NSString;

@interface MTCreateTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveDurationForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLabelForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)_checkNowPlayingMediaState:(id /* block */)a0;
- (void)_createTimerWithIntent:(id)a0 dryRun:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isPlayingMediaFromMRPlaybackState:(unsigned int)a0;
- (id)_responseToCreateTimerIntent:(id)a0 withCreatedTimer:(id)a1 error:(id)a2 dryRun:(BOOL)a3;
- (BOOL)_timer:(id)a0 conflictsWithRunningTimersInTimers:(id)a1;

@end

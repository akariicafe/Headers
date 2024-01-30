@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmSetTimerAttribute:(id)a0 completion:(id /* block */)a1;
- (void)handleSetTimerAttribute:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveToDurationForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (id)_responseToSetTimerAttributeIntent:(id)a0 withUpdatedTimer:(id)a1 error:(id)a2 dryRun:(BOOL)a3;
- (void)_updateTimer:(id)a0 toDuration:(double)a1 toLabel:(id)a2 dryRun:(BOOL)a3 completion:(id /* block */)a4;

@end

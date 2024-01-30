@interface SiriTimeInternal.SetTimerAttributeIntentHandler : NSObject <INSetTimerAttributeIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSetTimerAttribute:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveToDurationForSetTimerAttribute:(id)a0 withCompletion:(id /* block */)a1;

@end

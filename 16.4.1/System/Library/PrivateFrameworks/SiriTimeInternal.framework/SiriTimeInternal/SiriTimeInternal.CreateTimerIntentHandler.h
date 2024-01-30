@interface SiriTimeInternal.CreateTimerIntentHandler : NSObject <INCreateTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveDurationForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLabelForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTypeForCreateTimer:(id)a0 withCompletion:(id /* block */)a1;

@end

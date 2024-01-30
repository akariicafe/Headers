@interface SiriTimeInternal.DeleteTimerIntentHandler : NSObject <INDeleteTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleDeleteTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForDeleteTimer:(id)a0 withCompletion:(id /* block */)a1;

@end

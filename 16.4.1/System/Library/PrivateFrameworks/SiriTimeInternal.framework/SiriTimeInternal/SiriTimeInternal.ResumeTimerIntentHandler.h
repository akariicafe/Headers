@interface SiriTimeInternal.ResumeTimerIntentHandler : NSObject <INResumeTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleResumeTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForResumeTimer:(id)a0 withCompletion:(id /* block */)a1;

@end

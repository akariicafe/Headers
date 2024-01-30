@interface SiriTimeInternal.PauseTimerIntentHandler : NSObject <INPauseTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)handlePauseTimer:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTimerForPauseTimer:(id)a0 withCompletion:(id /* block */)a1;

@end

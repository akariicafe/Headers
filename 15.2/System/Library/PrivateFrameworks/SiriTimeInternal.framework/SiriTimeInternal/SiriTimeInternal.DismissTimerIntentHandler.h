@interface SiriTimeInternal.DismissTimerIntentHandler : NSObject <DismissTimerIntentHandling> {
    void /* unknown type, empty encoding */ siriTimerManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmDismissTimer:(id)a0 completion:(id /* block */)a1;
- (void)handleDismissTimer:(id)a0 completion:(id /* block */)a1;

@end

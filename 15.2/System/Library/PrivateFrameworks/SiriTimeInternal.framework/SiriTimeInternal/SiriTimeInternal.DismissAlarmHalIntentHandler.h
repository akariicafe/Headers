@interface SiriTimeInternal.DismissAlarmHalIntentHandler : NSObject <DismissAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmDismissAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleDismissAlarmHal:(id)a0 completion:(id /* block */)a1;

@end

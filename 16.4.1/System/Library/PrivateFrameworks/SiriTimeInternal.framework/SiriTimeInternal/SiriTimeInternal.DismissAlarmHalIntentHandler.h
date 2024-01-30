@interface SiriTimeInternal.DismissAlarmHalIntentHandler : NSObject <DismissAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmDismissAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleDismissAlarmHal:(id)a0 completion:(id /* block */)a1;

@end

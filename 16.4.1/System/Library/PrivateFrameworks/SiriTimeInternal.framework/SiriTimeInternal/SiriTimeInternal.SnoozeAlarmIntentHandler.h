@interface SiriTimeInternal.SnoozeAlarmIntentHandler : NSObject <SnoozeAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;

@end

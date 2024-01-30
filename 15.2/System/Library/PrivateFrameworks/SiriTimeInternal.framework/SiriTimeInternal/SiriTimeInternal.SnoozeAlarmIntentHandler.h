@interface SiriTimeInternal.SnoozeAlarmIntentHandler : NSObject <SnoozeAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;

@end

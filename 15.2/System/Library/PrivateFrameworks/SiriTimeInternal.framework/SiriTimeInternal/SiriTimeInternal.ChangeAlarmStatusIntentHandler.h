@interface SiriTimeInternal.ChangeAlarmStatusIntentHandler : NSObject <INChangeAlarmStatusIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleChangeAlarmStatus:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForChangeAlarmStatus:(id)a0 withCompletion:(id /* block */)a1;

@end

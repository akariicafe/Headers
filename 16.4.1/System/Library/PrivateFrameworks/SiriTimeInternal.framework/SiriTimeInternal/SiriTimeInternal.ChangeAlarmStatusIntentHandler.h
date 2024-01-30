@interface SiriTimeInternal.ChangeAlarmStatusIntentHandler : NSObject <ChangeAlarmStatusIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmChangeAlarmStatus:(id)a0 completion:(id /* block */)a1;
- (void)handleChangeAlarmStatus:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForChangeAlarmStatus:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveHandleSilentlyForChangeAlarmStatus:(id)a0 withCompletion:(id /* block */)a1;

@end

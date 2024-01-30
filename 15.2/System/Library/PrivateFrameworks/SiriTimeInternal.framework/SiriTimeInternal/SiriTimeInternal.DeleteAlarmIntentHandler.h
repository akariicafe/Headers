@interface SiriTimeInternal.DeleteAlarmIntentHandler : NSObject <INDeleteAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleDeleteAlarm:(id)a0 completion:(id /* block */)a1;
- (void)confirmDeleteAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForDeleteAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

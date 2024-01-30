@interface SiriTimeInternal.DeleteAlarmIntentHandler : NSObject <DeleteAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmDeleteAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleDeleteAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForDeleteAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

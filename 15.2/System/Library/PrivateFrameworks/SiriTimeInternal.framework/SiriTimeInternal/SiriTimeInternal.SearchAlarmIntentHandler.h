@interface SiriTimeInternal.SearchAlarmIntentHandler : NSObject <INSearchAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSearchAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForSearchAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

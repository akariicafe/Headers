@interface SiriTimeInternal.SearchAlarmIntentHandler : NSObject <SearchAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSearchAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleSearchAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmsForSearchAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

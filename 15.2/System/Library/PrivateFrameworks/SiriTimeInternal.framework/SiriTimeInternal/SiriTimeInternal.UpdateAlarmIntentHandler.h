@interface SiriTimeInternal.UpdateAlarmIntentHandler : NSObject <INUpdateAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveProposedTimeForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveProposedLabelForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

@interface SiriTimeInternal.UpdateAlarmIntentHandler : NSObject <UpdateAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveAlarmForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveProposedLabelForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveProposedTimeForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveProposedMeridiemSetByUserForUpdateAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

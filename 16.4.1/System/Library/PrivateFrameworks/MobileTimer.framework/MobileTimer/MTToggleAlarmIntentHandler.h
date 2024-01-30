@class NSString;

@interface MTToggleAlarmIntentHandler : MTAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling, MTToggleAlarmIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMTEnableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)confirmDisableAlarm:(id)a0 completion:(id /* block */)a1;
- (id)_alarmUserActivityWithDisableIntent:(id)a0;
- (id)_alarmUserActivityWithEnableIntent:(id)a0;
- (void)_toggleAlarm:(id)a0 alarmIDString:(id)a1 completion:(id /* block */)a2;
- (void)confirmEnableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)confirmMTDisableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)confirmMTEnableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)confirmToggleAlarm:(id)a0 completion:(id /* block */)a1;
- (BOOL)getEnableStateForAlarm:(id)a0;
- (void)handleDisableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleEnableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleMTDisableAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleToggleAlarm:(id)a0 completion:(id /* block */)a1;
- (void)provideAlarmOptionsForToggleAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveAlarmForToggleAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOperationForToggleAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveStateForToggleAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (id)updateEnableStateForAlarm:(id)a0 enabled:(BOOL)a1;

@end

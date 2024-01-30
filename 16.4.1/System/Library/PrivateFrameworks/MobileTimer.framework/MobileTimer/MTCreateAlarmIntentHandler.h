@class NSString;

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMTCreateAlarm:(id)a0 completion:(id /* block */)a1;
- (id)_alarmUserActivityWithIntent:(id)a0;
- (void)confirmMTCreateAlarm:(id)a0 completion:(id /* block */)a1;
- (id)defaultRepeatScheduleForMTCreateAlarm:(id)a0;
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveDateComponentsForMTCreateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLabelForMTCreateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveRepeatScheduleForMTCreateAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

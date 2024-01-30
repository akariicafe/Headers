@interface PLDuetServiceWithAccounting : PLDuetServiceImpl

+ (id)mapBundleID:(id)a0;

- (id)init;
- (void)initOperatorDependancies:(id)a0;
- (void)didReceiveEventWithPayload:(id)a0;
- (id)energyResponse;
- (void)accumulateWithLastCompletedDate:(id)a0 withNow:(id)a1;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (id)eventTransitionsWithEvents:(id)a0;
- (void)createQualificationEventsWithEventTransitions:(id)a0 withQualificationID:(int)a1;
- (id)energyResponseWithQualificationID:(int)a0;
- (void)accumulateWithLastCompletedDate:(id)a0 withNow:(id)a1 withQualificationID:(int)a2;

@end

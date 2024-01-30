@class PLXPCListenerOperatorComposition, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLDuetServiceSimple : PLDuetServiceImpl

@property (retain) NSMutableDictionary *bundleIDToState;
@property (retain) PLXPCListenerOperatorComposition *resetListener;
@property (retain) PLEntryNotificationOperatorComposition *chargingListener;
@property BOOL isCharging;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies:(id)a0;
- (void)didReceiveStartEventWithPayload:(id)a0;
- (id)didReceiveStopEventWithPayload:(id)a0;
- (void)didReceiveReset;
- (double)numCPUSecondsForPid:(int)a0;
- (double)numCPUSecondsForBundleID:(id)a0;
- (double)capUtilizationInSeconds:(double)a0 withUpperBoundInError:(double)a1 withCapInError:(double)a2 withCappedUpperBound:(double)a3;

@end

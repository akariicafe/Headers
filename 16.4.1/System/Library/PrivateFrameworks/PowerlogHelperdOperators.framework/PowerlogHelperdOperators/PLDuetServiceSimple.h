@class PLXPCListenerOperatorComposition, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLDuetServiceSimple : PLDuetServiceImpl

@property (retain) NSMutableDictionary *bundleIDToState;
@property (retain) PLXPCListenerOperatorComposition *resetListener;
@property (retain) PLEntryNotificationOperatorComposition *chargingListener;
@property BOOL isCharging;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveReset;
- (id)didReceiveStopEventWithPayload:(id)a0;
- (double)capUtilizationInSeconds:(double)a0 withUpperBoundInError:(double)a1 withCapInError:(double)a2 withCappedUpperBound:(double)a3;
- (void)didReceiveStartEventWithPayload:(id)a0;
- (void)initOperatorDependancies:(id)a0;
- (double)numCPUSecondsForBundleID:(id)a0;
- (double)numCPUSecondsForPid:(int)a0;

@end

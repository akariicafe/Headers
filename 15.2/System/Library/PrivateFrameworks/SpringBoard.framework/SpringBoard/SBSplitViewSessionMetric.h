@class NSUUID, NSString;

@interface SBSplitViewSessionMetric : SBAnalyticsStateMachineEventHandler

@property (copy, nonatomic) NSUUID *aggregateSessionIdentifier;
@property (nonatomic) double aggregateSessionStartTimestamp;
@property (copy, nonatomic) NSString *aggregateSessionStartReason;
@property (nonatomic) double individualSessionStartTimestamp;
@property (copy, nonatomic) NSString *individualSessionStartReason;
@property (copy, nonatomic) NSString *individualSessionPrimaryBundleIdentifier;
@property (copy, nonatomic) NSString *individualSessionSideBundleIdentifier;

- (BOOL)_sendIndividualSessionCoreAnalyticsEventWithAggregateIdentifier:(id)a0 startReason:(id)a1 endReason:(id)a2 duration:(double)a3 primaryBundleIdentifier:(id)a4 sideBundleIdentifier:(id)a5 doNotDisturbActive:(BOOL)a6 hardwareKeyboardAttached:(BOOL)a7;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (BOOL)_sendAggregateSessionCoreAnalyticsEventWithIdentifier:(id)a0 startReason:(id)a1 endReason:(id)a2 duration:(double)a3 doNotDisturbActive:(BOOL)a4 hardwareKeyboardAttached:(BOOL)a5;
- (void).cxx_destruct;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)a0 fromContext:(id)a1;
- (id)initWithHeartbeatMetricPersistence:(id)a0;

@end

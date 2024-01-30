@class NSString;

@interface SBFullScreenSessionMetric : SBAnalyticsStateMachineEventHandler

@property (nonatomic) double startTimestamp;
@property (copy, nonatomic) NSString *startReason;
@property (copy, nonatomic) NSString *primaryBundleIdentifier;
@property (copy, nonatomic) NSString *sideBundleIdentifier;

- (BOOL)_sendCoreAnalyticsEventWithStartReason:(id)a0 endReason:(id)a1 duration:(double)a2 primaryBundleIdentifier:(id)a3 doNotDisturbActive:(BOOL)a4 hardwareKeyboardAttached:(BOOL)a5;
- (id)_bundleIdentifierForElementWithLayoutRole:(long long)a0 fromContext:(id)a1;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

@class NSString;

@interface ATXModeTransitionMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *previousModeSemanticType;
@property (nonatomic) double previousModeDuration;
@property (nonatomic) BOOL previousModeHadScheduledExit;
@property (retain, nonatomic) NSString *exitReason;
@property (retain, nonatomic) NSString *enterReason;
@property (retain, nonatomic) NSString *transitionDeviceType;
@property (retain, nonatomic) NSString *transitionSource;
@property (retain, nonatomic) NSString *nextModeSemanticType;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)initWithPreviousModeSemanticType:(id)a0 previousModeDuration:(double)a1 previousModeHadScheduledExit:(BOOL)a2 exitReason:(id)a3 enterReason:(id)a4 transitionDeviceType:(id)a5 transitionSource:(id)a6 nextModeSemanticType:(id)a7;

@end

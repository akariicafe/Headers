@class NSString, NSNumber;

@interface ATXModeTransitionMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *previousModeSemanticType;
@property (nonatomic) double previousModeDuration;
@property (nonatomic) BOOL previousModeHadScheduledExit;
@property (retain, nonatomic) NSString *exitReason;
@property (retain, nonatomic) NSString *enterReason;
@property (retain, nonatomic) NSNumber *inferredModeConfidenceScore;
@property (retain, nonatomic) NSNumber *inferredModeDuration;
@property (retain, nonatomic) NSString *inferredModeOriginAnchorType;
@property (retain, nonatomic) NSString *inferredModeType;
@property (retain, nonatomic) NSNumber *inferredModeUILocation;
@property (retain, nonatomic) NSString *previousModeOrigin;
@property (retain, nonatomic) NSString *currentModeOrigin;
@property (retain, nonatomic) NSString *transitionDeviceType;
@property (retain, nonatomic) NSString *transitionSource;
@property (retain, nonatomic) NSString *nextModeSemanticType;
@property (nonatomic) BOOL appBasedSchedulingEnabled;
@property (nonatomic) BOOL timeBasedSchedulingEnabled;
@property (nonatomic) BOOL locationBasedSchedulingEnabled;
@property (nonatomic) BOOL smartActivationEnabled;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPreviousModeSemanticType:(id)a0 previousModeDuration:(double)a1 previousModeHadScheduledExit:(BOOL)a2 exitReason:(id)a3 enterReason:(id)a4 transitionDeviceType:(id)a5 transitionSource:(id)a6 nextModeSemanticType:(id)a7;

@end

@class NSString;

@interface ATXMMAppPredictionExpert : NSObject

@property (class, readonly, nonatomic) Class supportedAnchorClass;
@property (class, readonly, nonatomic) NSString *pathToPredictionTable;
@property (class, readonly, nonatomic) NSString *notificationIdentifier;
@property (class, readonly, nonatomic) BOOL isExpertEnabledForPredictions;

+ (unsigned int)predictionReasonForExpert;
+ (id)anchorTypeForExpert;
+ (BOOL)shouldPredicateOnStartDateForTrigger;
+ (long long)dateBufferForTriggerEvent;
+ (void)tagEventWithLOIForEvent:(id)a0;
+ (id)trainSubExpertWithCorrelatedEvents:(id)a0 appLaunchCountedSet:(id)a1;
+ (void)trainSubExpertWithCorrelatedEvents:(id)a0 indices:(id)a1 predicates:(id)a2 appLaunchCountedSet:(id)a3 predictionTable:(id)a4;
+ (void)serializeAndWritePredictionTable:(id)a0;
+ (id)fetchAnchorOccurrences;
+ (id)correlateTriggerEvents:(id)a0 withAppLaunches:(id)a1;
+ (id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)a0;
+ (void)trainSubExpertsWithTrainingData:(id)a0 correlatedEvents:(id)a1 appLaunchCountedSet:(id)a2;
+ (id)predictionTableFromCache;
+ (void)logTriggeredMMMetricsEntryForAnchorType:(long long)a0;
+ (BOOL)shouldHandleTriggerEventWithRateLimiter:(id)a0;
+ (void)fetchAndHandleTriggerEvent;
+ (id)predictionTable;
+ (id)fetchPredictionsForTriggerEvent:(id)a0;
+ (void)logPredictedScoreMMMetricsEntryForBundle:(id)a0 anchorType:(long long)a1 score:(double)a2;
+ (void)logPredictedCountMMMetricsEntryForAnchorType:(long long)a0 numPredictions:(int)a1;
+ (void)broadcastMMPredictionsForEvent:(id)a0 predictions:(id)a1;
+ (int)mmAnchorTypeToMMProtobufAnchor:(long long)a0;
+ (id)sampleEventForExpert;
+ (void)trainExpertWithAppLaunchEvents:(id)a0 appLaunchCountedSet:(id)a1;
+ (void)setupEventListenerForInferenceWithContext:(id)a0 rateLimiter:(id)a1;

- (id)init;

@end

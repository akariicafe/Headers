@class NSString;

@interface ATXMMAppPredictionExpert : NSObject

@property (class, readonly, nonatomic) Class supportedAnchorClass;
@property (class, readonly, nonatomic) NSString *pathToPredictionTable;
@property (class, readonly, nonatomic) NSString *notificationIdentifier;
@property (class, readonly, nonatomic) BOOL isExpertEnabledForPredictions;

+ (unsigned int)predictionReasonForExpert;
+ (id)predictionTable;
+ (int)mmAnchorTypeToMMProtobufAnchor:(long long)a0;
+ (id)anchorTypeForExpert;
+ (void)broadcastMMPredictionsForEvent:(id)a0 predictions:(id)a1;
+ (id)correlateTriggerEvents:(id)a0 withAppLaunches:(id)a1;
+ (id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)a0;
+ (long long)dateBufferForTriggerEvent;
+ (id)fetchAnchorOccurrences;
+ (void)fetchAndHandleTriggerEvent;
+ (id)fetchPredictionsForTriggerEvent:(id)a0;
+ (void)logPredictedCountMMMetricsEntryForAnchorType:(long long)a0 numPredictions:(int)a1;
+ (void)logPredictedScoreMMMetricsEntryForBundle:(id)a0 anchorType:(long long)a1 score:(double)a2;
+ (void)logTriggeredMMMetricsEntryForAnchorType:(long long)a0;
+ (id)predictionTableFromCache;
+ (id)sampleEventForExpert;
+ (void)serializeAndWritePredictionTable:(id)a0;
+ (void)setupEventListenerForInferenceWithContext:(id)a0 rateLimiter:(id)a1;
+ (BOOL)shouldHandleTriggerEventWithRateLimiter:(id)a0;
+ (BOOL)shouldPredicateOnStartDateForTrigger;
+ (void)tagEventWithLOIForEvent:(id)a0;
+ (void)trainExpertWithAppLaunchEvents:(id)a0 appLaunchCountedSet:(id)a1;
+ (id)trainSubExpertWithCorrelatedEvents:(id)a0 appLaunchCountedSet:(id)a1;
+ (void)trainSubExpertWithCorrelatedEvents:(id)a0 indices:(id)a1 predicates:(id)a2 appLaunchCountedSet:(id)a3 predictionTable:(id)a4;
+ (void)trainSubExpertsWithTrainingData:(id)a0 correlatedEvents:(id)a1 appLaunchCountedSet:(id)a2;

- (id)init;

@end

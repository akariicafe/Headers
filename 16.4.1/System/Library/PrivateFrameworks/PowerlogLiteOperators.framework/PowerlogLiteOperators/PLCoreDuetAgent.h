@class PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, _CDInBedDetector;

@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityFeaturesListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionQueryListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionTimelineListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionInterruptionListener;
@property (retain) _CDInBedDetector *inBedDetector;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionInactivityPredictionInterruption;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionInactivityPredictionTimeline;
+ (id)entryEventForwardDefinitionInactivityFeatures;
+ (id)entryEventIntervalDefinitionInactivityPrediction;
+ (id)entryEventForwardDefinitionInactivityPredictionQuery;
+ (id)entryEventIntervalDefinitionInBedDetection;

- (void)initOperatorDependancies;
- (void)logEventForwardInactivityPredictionInterruption:(id)a0;
- (void)logEventIntervalInactivityPrediction:(id)a0;
- (void)log;
- (void)logEventForwardInactivityPredictionTimeline:(id)a0;
- (void)logEventForwardInactivityFeatures:(id)a0;
- (void)logEventIntervalInBedDetection:(id)a0;
- (void)logEventForwardInactivityPredictionQuery:(id)a0;
- (void)handleInBedDetection:(id)a0;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void)registerForTaskingNotification:(id)a0;
- (void).cxx_destruct;
- (void)registerForDailyNotification;

@end

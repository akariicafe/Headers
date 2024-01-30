@class ATXMLActionProducer, ATXUpdatePredictionsSources, ATXServer, ATXUpdatePredictionsLogger, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUpdatePredictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ATXMLActionProducer *actionProducer;
@property (readonly, nonatomic) ATXUpdatePredictionsSources *updateSources;
@property (readonly, nonatomic) ATXUpdatePredictionsLogger *updatePredictionsLogger;
@property (retain, nonatomic) ATXServer *atxServer;

+ (id)sharedInstance;
+ (id)homeScreenPageConfigs;
+ (BOOL)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(unsigned long long)a0;

- (void)refreshAppPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)processHomeScreenFeedback;
- (void)processLockscreenFeedbackNoSync;
- (void)processHomeScreenFeedbackNoSync;
- (id)actionConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)appConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void)refreshActionPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)processSpotlightActionFeedback;
- (id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)a0;
- (id)_stringArrayFromBoxedConsumerSubTypeArray:(id)a0;
- (void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)a0 actionConsumerSubTypes:(id)a1 reason:(unsigned long long)a2;
- (void)processSpotlightActionFeedbackNoSync;
- (void)processLockscreenFeedback;
- (id)disabledConsumerSubTypes;
- (id)init;
- (void)processSpotlightAppFeedbackNoSync;
- (void)updateBehavioralPredictionsIfOlderThan:(double)a0 reason:(unsigned long long)a1;
- (void)processAppDirectoryFeedbackNoSync;
- (void)processAppDirectoryFeedback;
- (id)initWithATXServer:(id)a0 actionProducer:(id)a1 updateSources:(id)a2 updatePredictionsLogger:(id)a3;
- (void)processSpotlightAppFeedback;
- (void).cxx_destruct;

@end

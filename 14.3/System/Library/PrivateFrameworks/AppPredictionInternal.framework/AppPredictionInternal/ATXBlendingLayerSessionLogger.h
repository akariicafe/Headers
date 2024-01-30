@class ATXHomeScreenEvent, NSMutableDictionary, ATXBlendingLayerHyperParameters, BPSPublisher, NSDate, ATXPredictionContext;
@protocol ATXPETEventTracker2Protocol;

@interface ATXBlendingLayerSessionLogger : NSObject {
    NSMutableDictionary *_mostRecentBlendingCacheUpdateByConsumerSubType;
    ATXPredictionContext *_mostRecentPredictionContext;
    ATXHomeScreenEvent *_mostRecentScreenLockEvent;
    id<ATXPETEventTracker2Protocol> _tracker;
    ATXBlendingLayerHyperParameters *_hyperParameters;
}

@property (retain, nonatomic) BPSPublisher *uiPublisher;
@property (retain, nonatomic) BPSPublisher *ermPublisher;
@property (retain, nonatomic) BPSPublisher *blendingPublisher;
@property (retain, nonatomic) BPSPublisher *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher *predictionContextPublisher;
@property (retain, nonatomic) NSDate *now;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0 hyperParameters:(id)a1;
- (BOOL)shouldLogSession;
- (id)generateSessionLog;
- (void)logSessionLogToPET:(id)a0;
- (id)orderedMergeERMBlendingContextUIPublisher;
- (id)sessionERMEventFromERMEvent:(id)a0;
- (id)sessionBlendingUpdateFromBlendingUICacheUpdate:(id)a0 deviceContext:(id)a1;
- (id)sessionClientModelUpdatesForUICacheUpdate:(id)a0;
- (id)sessionUICacheForUICacheUpdate:(id)a0;
- (id)sessionDeviceContextFromPredictionContext:(id)a0;
- (int)locationTypeFromLocationOfInterest:(id)a0;
- (id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)a0;
- (id)sessionSuggestionFromProactiveSuggestion:(id)a0;
- (BOOL)logCurrentSessionIfPossible;

@end

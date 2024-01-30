@class ATXHomeScreenEvent, NSString, NSMutableDictionary, BPSPublisher, NSDate, ATXPredictionContext, ATXBlendingLayerHyperParameters;
@protocol ATXPETEventTracker2Protocol;

@interface ATXBlendingLayerSessionLogger : NSObject <ATXBlendingLayerSessionLoggerProtocol> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)orderedMergeERMBlendingContextUIPublisher;
- (void)logSessionLogToPET:(id)a0;
- (id)generateSessionLog;
- (id)sessionERMEventFromERMEvent:(id)a0;
- (id)sessionClientModelUpdatesForUICacheUpdate:(id)a0;
- (int)locationTypeFromLocationOfInterest:(id)a0;
- (BOOL)logCurrentSessionIfPossible;
- (id)sessionBlendingUpdateFromBlendingUICacheUpdate:(id)a0 deviceContext:(id)a1;
- (void).cxx_destruct;
- (id)sessionDeviceContextFromPredictionContext:(id)a0;
- (BOOL)shouldLogSession;
- (id)init;
- (id)initWithTracker:(id)a0 hyperParameters:(id)a1;
- (id)sessionSuggestionFromProactiveSuggestion:(id)a0;
- (id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)a0;
- (id)sessionUICacheForUICacheUpdate:(id)a0;

@end

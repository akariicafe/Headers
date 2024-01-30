@class NSString, ATXAnchorModelHyperParameters, ATXProactiveSuggestionClientModel;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol> {
    id<ATXAnchorModelDataStoreWrapperProtocol> _storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (retain, nonatomic) ATXProactiveSuggestionClientModel *anchorModelClientModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)forwardPredictions:(id)a0;
- (id)clientModelId;
- (id)clientModelSpec;
- (id)appAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (id)actionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (void)forwardPredictionTuplesToBlendingLayer:(id)a0 feedbackMetadata:(id)a1;
- (id)initWithAnchorModelDataStoreWrapper:(id)a0 anchorModelHyperParameters:(id)a1;

@end

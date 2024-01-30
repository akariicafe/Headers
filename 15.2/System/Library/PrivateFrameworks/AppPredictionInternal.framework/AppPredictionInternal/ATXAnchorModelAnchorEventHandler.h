@class ATXAnchor, ATXAnchorModelHyperParameters, NSDate, ATXDuetEvent;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelAnchorEventHandler : NSObject {
    id<ATXAnchorModelDataStoreWrapperProtocol> _dataStoreWrapper;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_baseDate;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) ATXDuetEvent *anchorEvent;

- (BOOL)predictionIsHighConfidence:(id)a0;
- (id)initWithAnchor:(id)a0 anchorEvent:(id)a1 dataStoreWrapper:(id)a2 hyperParameters:(id)a3 tracker:(id)a4;
- (id)initWithAnchor:(id)a0 anchorEvent:(id)a1;
- (void)_logPhaseFilteredMetricFromTrainingResults:(id)a0 anchorModelPredictions:(id)a1;
- (id)dateIntervalFromTrainingResult:(id)a0;
- (id)predictionsForAnchorEvent;
- (void).cxx_destruct;
- (id)predictionForCandidateFromTrainingResult:(id)a0;
- (id)anchorModelPredictionFromTrainingResult:(id)a0 classificationResult:(id)a1;
- (BOOL)predictionIsMediumConfidence:(id)a0;
- (double)predictionScoreFromTrainingResult:(id)a0;

@end

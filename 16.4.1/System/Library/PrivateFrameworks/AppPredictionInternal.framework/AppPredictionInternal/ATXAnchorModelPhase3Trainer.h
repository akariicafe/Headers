@class NSString, ATXAnchor, ATXAnchorModelDataStoreWrapper, ATXAnchorModelHyperParameters;

@interface ATXAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)a0;
- (double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)a0 startSecondsAfterAnchor:(double)a1;
- (unsigned long long)indexOfPercentile:(double)a0 array:(id)a1;
- (id)initForAnchor:(id)a0;
- (id)initForAnchor:(id)a0 anchorModelDataStoreWrapper:(id)a1;
- (double)startSecondsAfterAnchorGivenHistoricalOffsets:(id)a0;
- (id)trainPhase3ForCandidate:(id)a0;

@end

@class NSString, ATXAnchor, ATXAnchorModelDataStoreWrapper, ATXAnchorModelHyperParameters;

@interface ATXAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)candidateClassifierType;
- (id)initForAnchor:(id)a0;
- (id)initForAnchor:(id)a0 anchorModelDataStoreWrapper:(id)a1;
- (id)trainClassifierForCandidateId:(id)a0 candidateType:(id)a1;
- (id)trainGamePlayKitDecisionTreeCandidateClassifierForCandidate:(id)a0 candidateType:(id)a1;
- (id)trainNaivePositiveCandidateClassifierForCandidate:(id)a0 candidateType:(id)a1;
- (id)trainPhase2ForCandidate:(id)a0 candidateType:(id)a1;
- (id)trainStrictContextMatchCandidateClassifierForCandidate:(id)a0 candidateType:(id)a1;

@end

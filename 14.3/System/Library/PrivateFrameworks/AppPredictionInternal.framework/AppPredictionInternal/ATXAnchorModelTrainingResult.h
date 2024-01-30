@class NSString, ATXAnchor, ATXAnchorModelPredictionOffsetFromAnchorOccurrence, ATXAnchorModelPhase1TrainingResult;
@protocol ATXAnchorModelCandidateClassifierProtocol;

@interface ATXAnchorModelTrainingResult : NSObject

@property (readonly, nonatomic) ATXAnchor *anchor;
@property (readonly, nonatomic) NSString *candidateId;
@property (readonly, nonatomic) NSString *candidateType;
@property (readonly, nonatomic) ATXAnchorModelPhase1TrainingResult *phase1TrainingResult;
@property (readonly, nonatomic) id<ATXAnchorModelCandidateClassifierProtocol> candidateClassifier;
@property (readonly, nonatomic) long long candidateClassifierType;
@property (readonly, nonatomic) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAnchor:(id)a0 candidateId:(id)a1 candidateType:(id)a2 phase1TrainingResult:(id)a3 candidateClassifier:(id)a4 candidateClassifierType:(long long)a5 offsetFromAnchorToShowPrediction:(id)a6;

@end

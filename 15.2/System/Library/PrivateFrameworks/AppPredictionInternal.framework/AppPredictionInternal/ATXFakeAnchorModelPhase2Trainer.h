@class NSString, NSMutableArray;

@interface ATXFakeAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {
    NSMutableArray *_candidateIdsForPhase2Training;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (long long)candidateClassifierType;
- (id)trainPhase2ForCandidate:(id)a0 candidateType:(id)a1;
- (id)candidateIdsForPhase2Training;

@end

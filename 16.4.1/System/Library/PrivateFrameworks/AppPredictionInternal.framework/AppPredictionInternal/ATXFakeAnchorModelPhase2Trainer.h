@class NSString, NSMutableArray;

@interface ATXFakeAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {
    NSMutableArray *_candidateIdsForPhase2Training;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)candidateClassifierType;
- (id)candidateIdsForPhase2Training;
- (id)trainPhase2ForCandidate:(id)a0 candidateType:(id)a1;

@end

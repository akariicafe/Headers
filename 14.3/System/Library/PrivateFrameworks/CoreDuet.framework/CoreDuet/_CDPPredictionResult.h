@class NSArray, NSMutableDictionary;

@interface _CDPPredictionResult : NSObject {
    NSArray *_rankedMembers;
}

@property (retain) NSMutableDictionary *scoresForMembers;
@property double weight;

- (void).cxx_destruct;
- (void)commonInit;
- (id)rankedMembers:(id)a0;
- (id)rankedMembers;
- (id)initWithMembers:(id)a0 andScores:(id)a1;
- (id)initByMergingPredictionResults:(id)a0;
- (id)rankedCandidates:(id)a0;
- (id)rankedMembersPassingThreshold:(double)a0;

@end

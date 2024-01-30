@class NSObject, NSMutableDictionary, KVSpanMatchPolicy;
@protocol KVPriorRetriever;

@interface KVSpanMatchResultInterpreter : NSObject {
    NSObject<KVPriorRetriever> *_priorRetriever;
    NSMutableDictionary *_policyOverrides;
}

@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyWithPriorsPolicy;
@property (readonly, nonatomic) KVSpanMatchPolicy *exactWithPriorsPolicy;
@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyPolicy;
@property (readonly, nonatomic) KVSpanMatchPolicy *exactPolicy;
@property (readonly, nonatomic) KVSpanMatchPolicy *fuzzyWithAliasPolicy;
@property (readonly, nonatomic) KVSpanMatchPolicy *exactWithAliasPolicy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPriorRetriever:(id)a0;
- (BOOL)_checkEligibilityOfSpanMatch:(id)a0 allowPartialMatch:(BOOL)a1 allowApproxMatch:(BOOL)a2 allowAliasMatch:(BOOL)a3 query:(id)a4;
- (void)_addScoredMatch:(id)a0 toSortedArray:(id)a1;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)a0 regionalThresholdScalar:(float)a1 globalThresholdScalar:(float)a2 maximalScore:(float)a3;
- (id)_filterRankAndThresholdCandidates:(id)a0 ofQuery:(id)a1 withPolicy:(id)a2;
- (id)_groupKeyForFieldMatches:(id)a0 itemType:(long long)a1;
- (id)_rankerPolicyForGroupKey:(id)a0;
- (float)_scoreSpanMatch:(id)a0 policy:(id)a1;
- (id)_sortCandidatesAndPopulatePriors:(id)a0;
- (void)addPolicyOverride:(id)a0 forItemType:(long long)a1;
- (id)interpretSpanMatchResults:(id)a0 ofQuery:(id)a1;

@end

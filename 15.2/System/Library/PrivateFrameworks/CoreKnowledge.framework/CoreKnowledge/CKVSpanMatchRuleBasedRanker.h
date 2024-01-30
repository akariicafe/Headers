@class NSString, CKVSettings, NSObject, CKVSpanMatchRankerPolicy;
@protocol CKVPriorRetriever;

@interface CKVSpanMatchRuleBasedRanker : NSObject <CKVSpanMatchResultInterpreter> {
    CKVSettings *_settings;
    NSObject<CKVPriorRetriever> *_priorRetriever;
    CKVSpanMatchRankerPolicy *_contactFuzzyWithPriorsPolicy;
    CKVSpanMatchRankerPolicy *_contactExactWithPriorsPolicy;
    CKVSpanMatchRankerPolicy *_contactFuzzyWithoutPriorsPolicy;
    CKVSpanMatchRankerPolicy *_appPolicy;
    CKVSpanMatchRankerPolicy *_generalExactPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)interpretSpanMatchResults:(id)a0 ofTokenChain:(id)a1;
- (id)initWithPriorRetriever:(id)a0 settings:(id)a1;
- (id)_rankAndThresholdResults:(id)a0 ofTokenChain:(id)a1;
- (id)_sortCandidatesFromResults:(id)a0 andPopulatePriors:(id *)a1;
- (id)_groupKeyForSpanMatch:(id)a0 itemType:(long long)a1;
- (id)_filterRankAndThresholdCandidates:(id)a0 ofTokenChain:(id)a1 withPolicy:(id)a2 priorInfoMap:(id)a3;
- (float)_scoreSpanMatch:(id)a0 priorInfo:(id)a1 policy:(id)a2;
- (void)_addScoredMatch:(id)a0 toSortedArray:(id)a1;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)a0 regionalThresholdScalar:(float)a1 globalThresholdScalar:(float)a2 maximalScore:(float)a3;
- (BOOL)_checkEligibilityOfSpanMatch:(id)a0 priorInfo:(id)a1 allowPartialMatch:(BOOL)a2 allowApproxMatch:(BOOL)a3 locale:(id)a4;
- (id)_rankerPolicyForGroupKey:(id)a0;

@end

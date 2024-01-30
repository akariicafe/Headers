@class NSArray, NSDictionary, BMBehaviorRetriever, _PSRuleRankingMLModel, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleMiningModel : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
@property (nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;
@property (nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;
@property (nonatomic) double _PSRuleMiningModelMinSupportForSuggestion;
@property (nonatomic) double _PSRuleMiningMLModelScoreThreshold;
@property (nonatomic) BOOL _PSRuleMiningIsMLModelInUse;
@property (nonatomic) BOOL _PSRuleMiningIsAdaptedMLModelOK;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain) _PSRuleRankingMLModel *ruleRankingModel;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (retain, nonatomic) NSArray *behaviorRulesConsideringInTheContext;
@property (retain, nonatomic) NSArray *scores;

- (BOOL)isAdaptedModelCreated;
- (BOOL)isAdaptedModelUsed;
- (void)updateModelProperties:(id)a0;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (void).cxx_destruct;
- (void)updateAdaptableModelProperties:(id)a0;
- (id)extractAdaptedModelRecipeID;
- (id)filterByRegularizingRules:(id)a0 invalidatedByAnyConflictingItems:(id)a1 containingItemTypes:(id)a2;
- (id)filterByRegularizingRulesByContextOverlap:(id)a0 regulularizeItems:(id)a1 queryItems:(id)a2 regularizationConstraint:(unsigned long long)a3;
- (id)initWithKnowledgeStore:(id)a0 contactresolver:(id)a1 withConfig:(id)a2;
- (void)loadMLModel;
- (id)suggestionArrayWithArray:(id)a0 appendingUniqueElementsByBundleIdFromArray:(id)a1;
- (id)suggestionProxiesWithPredictionContext:(id)a0 photoSuggestedPeople:(id)a1 supportedBundleIDs:(id)a2;

@end

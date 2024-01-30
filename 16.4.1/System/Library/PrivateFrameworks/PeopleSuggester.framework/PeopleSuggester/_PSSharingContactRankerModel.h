@class _PSSharingContactRankerMLModel, _CDInteractionStore, _CDInteractionCache, _PSSharingContactFeatureExtraction;

@interface _PSSharingContactRankerModel : NSObject

@property (nonatomic) BOOL _PSSharingContactRankerMLModelInUse;
@property (nonatomic) double _PSSharingContactRankerMLModelScoreThreshold;
@property (retain) _PSSharingContactRankerMLModel *sharingContactRankerMLModel;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;
@property (retain) _PSSharingContactFeatureExtraction *feaExtractionHandle;

- (void)updateModelProperties:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteractionStore:(id)a0 messageInteractionCache:(id)a1 shareInteractionCache:(id)a2;
- (void)loadMLModel;
- (id)suggestionProxiesWithPredictionContext:(id)a0 supportedBundleIDs:(id)a1 behaviorRulesConsideringInTheContext:(id)a2 interactionModelSuggestions:(id)a3 ruleRankingMLModelScores:(id)a4;

@end

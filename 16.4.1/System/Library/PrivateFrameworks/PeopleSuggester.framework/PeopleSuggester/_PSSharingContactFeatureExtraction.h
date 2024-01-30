@class CAPContactFillerUserEvent, NSMutableDictionary, _CDInteractionStore, NSDictionary, BMBehaviorRetriever, _PSContactFillerNormalizationConstants;

@interface _PSSharingContactFeatureExtraction : NSObject

@property (retain, nonatomic) CAPContactFillerUserEvent *userEvent;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (nonatomic) BOOL constantFeaturesReady;
@property (retain, nonatomic) _PSContactFillerNormalizationConstants *normConstants;
@property (retain, nonatomic) NSMutableDictionary *constantFeatures;
@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (void)extractConstantFeaturesInto:(id)a0;
- (void)extractFeaturesInto:(id)a0 withPredictionContext:(id)a1 forContactId:(id)a2 forInteraction:(id)a3 behaviorRulesConsideringInTheContext:(id)a4 ruleRankingMLModelScores:(id)a5 interactionModelScores:(id)a6;
- (id)initWithMetadata:(id)a0 interactionStore:(id)a1;
- (void)transferConstantFeatures:(id)a0 to:(id)a1;

@end

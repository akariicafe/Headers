@class NSMutableDictionary, _CDInteractionStore, NSDictionary, BMBehaviorRetriever;

@interface _PSBehaviorRuleFeatureExtraction : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (nonatomic) BOOL constantFeaturesReady;
@property (nonatomic) BOOL contextFeaturesReady;
@property (retain, nonatomic) NSMutableDictionary *constantFeatures;
@property (retain, nonatomic) NSMutableDictionary *contextFeatures;
@property (readonly) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (int)bucketedValue:(int)a0;
- (void)extractConstantFeaturesForMLModelIntoFeatures:(id)a0;
- (void)extractContextMatchFeatures:(id)a0 features:(id)a1;
- (void)extractFeaturesGivenRule:(id)a0 contextItems:(id)a1 features:(id)a2;
- (void)precalculateConstantFeatures;
- (void)transferFeaturesFrom:(id)a0 toFeatures:(id)a1;

@end

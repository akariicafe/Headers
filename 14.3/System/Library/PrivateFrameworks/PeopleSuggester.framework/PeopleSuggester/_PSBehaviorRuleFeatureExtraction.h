@class NSMutableDictionary, _CDInteractionStore, NSDictionary, BMBehaviorRetriever;

@interface _PSBehaviorRuleFeatureExtraction : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (nonatomic) BOOL constantFeaturesReady;
@property (retain, nonatomic) NSMutableDictionary *constantFeatures;
@property (readonly) NSDictionary *metadata;

- (void).cxx_destruct;
- (int)bucketedValue:(int)a0;
- (void)extractFeaturesGivenRule:(id)a0 contextItems:(id)a1 features:(id)a2;
- (id)initWithMetadata:(id)a0;
- (void)extractConstantFeaturesForMLModelWithContext:(id)a0 features:(id)a1;
- (void)transferConstantFeatures:(id)a0 to:(id)a1;

@end

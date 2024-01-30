@class PGGraphFeatureNodeCollection, PGAssetCollectionFeatureSpecification, PGGraphMomentNode;

@interface PGAssetCollectionFeatureInstance : NSObject

@property (readonly) PGAssetCollectionFeatureSpecification *specification;
@property (readonly) PGGraphMomentNode *momentNode;
@property (readonly) PGGraphFeatureNodeCollection *featureNodes;

- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0 momentNode:(id)a1;
- (id)initWithSpecification:(id)a0 momentNode:(id)a1 featureNodes:(id)a2;

@end

@class NSNumber, PFSceneTaxonomyNode;

@interface CLSInvestigationHelperSceneNodeLevelAndWeight : NSObject

@property (readonly) PFSceneTaxonomyNode *taxonomyNode;
@property (readonly) NSNumber *level;
@property (readonly) NSNumber *weight;

- (void).cxx_destruct;
- (id)initWithTaxonomyNode:(id)a0 level:(id)a1 andWeight:(id)a2;

@end

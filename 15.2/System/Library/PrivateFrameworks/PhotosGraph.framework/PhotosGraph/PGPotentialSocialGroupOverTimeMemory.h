@class NSSet, NSArray, NSString, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory

@property (readonly) PGGraphSocialGroupNode *socialGroupNode;
@property (readonly) NSSet *personNodes;
@property (retain) NSArray *curatedAssetLocalIdentifiers;
@property (retain) NSArray *facedAssetLocalIdentifiers;
@property (readonly) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithSocialGroupNode:(id)a0 momentNodes:(id)a1;

@end

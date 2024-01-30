@class NSArray, PGGraphPersonNode, NSMutableSet;

@interface PGPotentialPetMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (retain) NSArray *petAssetLocalIdentifiers;
@property (readonly) PGGraphPersonNode *ownerPersonNode;
@property (readonly) long long year;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (void)addMomentNode:(id)a0;
- (id)initWithOwner:(id)a0 year:(long long)a1;

@end

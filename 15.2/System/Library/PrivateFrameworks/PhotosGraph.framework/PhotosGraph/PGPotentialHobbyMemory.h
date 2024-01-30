@class NSArray, PGGraphPersonNode, NSMutableSet;

@interface PGPotentialHobbyMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
    unsigned long long _memoryCategorySubcategory;
}

@property (retain) NSArray *hobbyAssetLocalIdentifiers;
@property (readonly) PGGraphPersonNode *personNode;
@property (readonly) long long year;
@property (readonly) long long hobbyType;

+ (id)sceneFeatureNameForHobbyType:(long long)a0;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (void)addMomentNode:(id)a0;
- (id)initWithPerson:(id)a0 year:(long long)a1 hobbyType:(long long)a2;

@end

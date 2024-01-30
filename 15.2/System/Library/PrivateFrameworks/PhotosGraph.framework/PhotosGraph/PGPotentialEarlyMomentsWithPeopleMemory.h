@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory

@property (readonly, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSArray *facedAssetLocalIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1;

@end

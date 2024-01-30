@class NSSet, NSDateInterval, PGGraphLocationNode, PGGraphLocationNodeCollection;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) NSSet *interestingMomentNodes;
@property (retain) PGGraphLocationNodeCollection *supersetLocationNodes;

- (void).cxx_destruct;
- (id)initWithSupersetLocationNode:(id)a0 supersetDateInterval:(id)a1 interestingMomentNodes:(id)a2 momentNodes:(id)a3;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end

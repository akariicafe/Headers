@class NSSet, NSDateInterval, NSArray, PGGraphLocationNode;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) NSSet *interestingMomentNodes;
@property (retain) NSArray *interestingAssetLocalIdentifiersInSuperset;
@property (retain) NSArray *assetLocalIdentifiersInSuperset;
@property (retain) NSSet *supersetLocationNodes;

- (void).cxx_destruct;
- (id)initWithSupersetLocationNode:(id)a0 supersetDateInterval:(id)a1 interestingMomentNodes:(id)a2 momentNodes:(id)a3;

@end

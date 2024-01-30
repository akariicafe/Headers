@class NSArray, PGGraphPersonNode, NSMutableSet;

@interface PGPotentialPeopleMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (retain) PGGraphPersonNode *personNode;
@property (readonly) long long year;
@property (retain) NSArray *facedAssetLocalIdentifiers;

- (void).cxx_destruct;
- (void)addMomentNode:(id)a0;
- (id)initWithSubcategory:(unsigned long long)a0 peopleNode:(id)a1 year:(long long)a2;

@end

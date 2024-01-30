@class NSArray, PGGraphPersonNode, NSMutableSet;

@interface PGPotentialHobbyMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (retain) NSArray *hobbyAssetLocalIdentifiers;
@property (readonly) PGGraphPersonNode *personNode;
@property (readonly) long long year;
@property (readonly) long long hobbyType;

- (void).cxx_destruct;
- (void)addMomentNode:(id)a0;
- (id)initWithPerson:(id)a0 year:(long long)a1 hobbyType:(long long)a2;

@end

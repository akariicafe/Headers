@class NSArray, NSSet, NSMutableSet, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphSocialGroupNode *socialGroupNode;
@property (readonly) long long year;
@property (retain) NSArray *facedAssetLocalIdentifiers;
@property (retain) NSSet *peopleUUIDs;

- (void).cxx_destruct;
- (void)addMomentNode:(id)a0;
- (id)initWithSocialGroupNode:(id)a0 year:(long long)a1;

@end

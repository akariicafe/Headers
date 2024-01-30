@class NSString, PGGraphBusinessNode, NSMutableSet;

@interface PGPotentialBusinessMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphBusinessNode *businessNode;
@property (readonly) long long year;
@property (readonly) NSString *business;

- (void).cxx_destruct;
- (id)initWithBusinessNode:(id)a0 year:(long long)a1;
- (void)addMomentNode:(id)a0;

@end

@class NSDate, NSMutableSet, PGGraphAreaNode;

@interface PGPotentialAreaMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphAreaNode *areaNode;
@property (readonly) long long year;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (void)addMomentNode:(id)a0;
- (id)initWithAreaNode:(id)a0 year:(long long)a1;

@end

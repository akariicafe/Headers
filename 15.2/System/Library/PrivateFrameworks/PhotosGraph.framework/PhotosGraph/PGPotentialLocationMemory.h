@class NSMutableSet, PGGraphLocationCityNode, NSDate;

@interface PGPotentialLocationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphLocationCityNode *cityNode;
@property (readonly) long long year;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (void)addMomentNode:(id)a0;
- (id)initWithCityNode:(id)a0 year:(long long)a1;

@end

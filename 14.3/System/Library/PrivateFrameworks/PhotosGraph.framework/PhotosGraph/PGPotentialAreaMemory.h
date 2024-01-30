@class NSString, NSArray, PGGraphAreaNode, NSDate, NSMutableSet;

@interface PGPotentialAreaMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphAreaNode *areaNode;
@property (readonly) long long year;
@property (readonly) NSString *area;
@property (retain) NSArray *assetLocalIdentifiersInArea;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (void)addMomentNode:(id)a0;
- (id)initWithAreaNode:(id)a0 year:(long long)a1;

@end

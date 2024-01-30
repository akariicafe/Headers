@class NSString, NSArray, NSMutableSet, NSDate, PGGraphLocationCityNode;

@interface PGPotentialLocationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphLocationCityNode *cityNode;
@property (readonly) long long year;
@property (readonly) NSString *city;
@property (retain) NSArray *assetLocalIdentifiersInCity;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (void)addMomentNode:(id)a0;
- (id)initWithCityNode:(id)a0 year:(long long)a1;

@end

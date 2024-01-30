@class NSArray, NSMutableArray;

@interface NeighborGraph : NSObject

@property (retain, nonatomic) NSArray *bssids;
@property (retain, nonatomic) NSMutableArray *graph;

- (void).cxx_destruct;
- (BOOL)doesPathExist:(id)a0 target:(id)a1;
- (id)initWithBssidArray:(id)a0;
- (void)setNeighborsForBssid:(id)a0 neighbors:(id)a1;
- (unsigned long long)graphDensity;

@end

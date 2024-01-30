@class NSMutableArray, NSMutableSet;

@interface _PSDBSCAN : NSObject

@property (readonly) unsigned long long minPts;
@property (readonly) double eps;
@property (retain) NSMutableArray *pointsArray;
@property (retain) NSMutableSet *visitedPoints;
@property (retain) NSMutableArray *noisePoints;
@property (retain) NSMutableSet *clusteredPoints;
@property (retain) NSMutableArray *clusters;

- (void).cxx_destruct;
- (void)emptyCollections;
- (id)expandClusterForPoint:(id)a0 withNeighborIndices:(id)a1;
- (void)fitData:(id)a0;
- (id)getNeighborIndices:(unsigned long long)a0;
- (id)initWithMinimumPointsForClustering:(unsigned long long)a0 MaxNeighborDistance:(double)a1;
- (void)mergeCurrNeighbors:(id)a0 withArray:(id)a1 andUpdateSet:(id)a2;

@end

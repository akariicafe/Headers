@class NSArray;

@interface PLDataClustering : NSObject

@property (readonly, copy, nonatomic) id /* block */ distanceBlock;
@property (readonly, nonatomic) NSArray *numericValueKeypaths;

+ (id)clusteringWithNumericValueKeypaths:(id)a0;
+ (id)clusteringWithDistanceBlock:(id /* block */)a0;
+ (id)clustering;

- (void).cxx_destruct;
- (id)initWithDistanceBlock:(id /* block */)a0;
- (id)initWithNumericValueKeypaths:(id)a0;
- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (void)freeDistancesMatrix:(double **)a0 forDataset:(id)a1;
- (double **)createDistancesMatrixForDataset:(id)a0;

@end

@class NSArray;

@interface PLDataClustering : NSObject

@property (readonly, copy, nonatomic) id /* block */ distanceBlock;
@property (copy, nonatomic) id /* block */ clusterConsolidationBlock;
@property (copy, nonatomic) id /* block */ clusterKeyElementBlock;
@property (readonly, nonatomic) NSArray *numericValueKeypaths;

+ (id)clustering;
+ (id)clusteringWithNumericValueKeypaths:(id)a0;
+ (id)clusteringWithDistanceBlock:(id /* block */)a0;

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (void)freeDistancesFlatMatrix:(double *)a0;
- (double *)createDistancesFlatMatrixForDataset:(id)a0;
- (id)initWithNumericValueKeypaths:(id)a0;
- (void)freeDistancesMatrix:(double **)a0 forDataset:(id)a1;
- (double **)createDistancesMatrixForDataset:(id)a0;
- (id)initWithDistanceBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

@class NSArray;

@interface PLDataClustering : NSObject

@property (readonly, copy, nonatomic) id /* block */ distanceBlock;
@property (copy, nonatomic) id /* block */ clusterConsolidationBlock;
@property (copy, nonatomic) id /* block */ clusterKeyElementBlock;
@property (readonly, nonatomic) NSArray *numericValueKeypaths;

+ (id)clusteringWithNumericValueKeypaths:(id)a0;
+ (id)clustering;
+ (id)clusteringWithDistanceBlock:(id /* block */)a0;

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDistanceBlock:(id /* block */)a0;
- (void)freeDistancesMatrix:(double **)a0 forDataset:(id)a1;
- (double *)createDistancesFlatMatrixForDataset:(id)a0;
- (double **)createDistancesMatrixForDataset:(id)a0;
- (double **)createDistancesMatrixForDataset:(id)a0 progressBlock:(id /* block */)a1;
- (void)freeDistancesFlatMatrix:(double *)a0;
- (id)initWithNumericValueKeypaths:(id)a0;

@end

@class PMLSparseMatrix, PMLModelRegressor;

@interface PMLTrainingStoredSessionBatch : NSObject

@property (readonly, nonatomic) PMLSparseMatrix *covariates;
@property (readonly, nonatomic) PMLModelRegressor *outcomes;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)a0;
- (id)initWithCovariates:(id)a0 outcomes:(id)a1;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabels:(id)a0;

@end

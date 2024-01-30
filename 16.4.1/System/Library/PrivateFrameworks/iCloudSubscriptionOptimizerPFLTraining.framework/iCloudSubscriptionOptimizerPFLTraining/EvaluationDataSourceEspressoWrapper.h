@protocol EvaluatorDataSource;

@interface EvaluationDataSourceEspressoWrapper : NSObject <ETDataSource>

@property (retain, nonatomic) id<EvaluatorDataSource> dataSource;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)a0;
- (int)numberOfDataPoints;
- (id)dataProcessAtIndex:(int)a0;
- (id)featureProviderAtIndex:(int)a0;
- (id)initWithEvaluatorDataSource:(id)a0;

@end

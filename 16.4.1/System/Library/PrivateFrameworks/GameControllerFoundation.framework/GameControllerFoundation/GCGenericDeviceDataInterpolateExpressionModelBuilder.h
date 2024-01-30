@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataInterpolateExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression;

+ (Class)modelClass;

- (id)build;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end

@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataBitTestExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (nonatomic) BOOL partialMatch;

+ (Class)modelClass;

- (id)build;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end

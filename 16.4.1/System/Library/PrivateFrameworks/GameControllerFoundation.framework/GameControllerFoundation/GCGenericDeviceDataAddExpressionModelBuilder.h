@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataAddExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (Class)modelClass;

- (id)build;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end

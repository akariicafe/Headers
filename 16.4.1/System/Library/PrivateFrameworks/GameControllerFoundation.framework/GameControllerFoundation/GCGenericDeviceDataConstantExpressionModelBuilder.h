@interface GCGenericDeviceDataConstantExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (nonatomic) double value;

+ (Class)modelClass;

- (id)build;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end

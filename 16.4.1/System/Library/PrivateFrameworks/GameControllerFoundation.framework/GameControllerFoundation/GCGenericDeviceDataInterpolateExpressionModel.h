@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataInterpolateExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end

@class NSString, NSNumber, NSArray;

@interface TINumericValueDescriptor : TIMetricDescriptor

@property (readonly, nonatomic) NSString *calculationExpression;
@property (readonly, nonatomic) NSString *calculationPrecondition;
@property (readonly, nonatomic) NSNumber *calculationDefaultValue;
@property (readonly, nonatomic) NSArray *calculationDependencies;
@property (readonly, nonatomic) NSArray *bucketThresholds;
@property (readonly, nonatomic) NSArray *bucketValues;

+ (id)numericValueDescriptorWithMetricName:(id)a0 calculationExpression:(id)a1 calculationPrecondition:(id)a2 calculationDefaultValue:(id)a3 calculationDependencies:(id)a4 bucketThresholds:(id)a5 bucketValues:(id)a6;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)a0 calculationExpression:(id)a1 calculationPrecondition:(id)a2 calculationDefaultValue:(id)a3 calculationDependencies:(id)a4 bucketThresholds:(id)a5 bucketValues:(id)a6;

@end

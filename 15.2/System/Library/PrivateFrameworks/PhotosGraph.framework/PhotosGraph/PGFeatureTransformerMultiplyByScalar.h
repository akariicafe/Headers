@interface PGFeatureTransformerMultiplyByScalar : PGFeatureSliceTransformer

@property (readonly, nonatomic) float scalarToMultiply;

+ (id)name;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;

- (id)applyTransformationToFloatVector:(id)a0 error:(id *)a1;
- (id)initWithScalarToMultiply:(float)a0;
- (id)initWithScalarToMultiply:(float)a0 fromIndex:(long long)a1 toIndex:(long long)a2;

@end

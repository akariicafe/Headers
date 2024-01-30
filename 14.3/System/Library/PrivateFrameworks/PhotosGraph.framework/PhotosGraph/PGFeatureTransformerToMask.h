@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer

@property (readonly, nonatomic) float maskingValue;

+ (id)name;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;

- (id)applyTransformationToFloatVector:(id)a0 error:(id *)a1;
- (id)initWithMaskingFloatValue:(float)a0;
- (id)initWithMaskingFloatValue:(float)a0 fromIndex:(long long)a1 toIndex:(long long)a2;

@end

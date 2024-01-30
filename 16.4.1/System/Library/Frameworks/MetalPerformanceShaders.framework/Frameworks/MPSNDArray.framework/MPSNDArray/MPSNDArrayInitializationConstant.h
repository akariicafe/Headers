@interface MPSNDArrayInitializationConstant : MPSNDArrayInitialization

@property (readonly, nonatomic) float constantValue;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 constantValue:(float)a1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;

@end

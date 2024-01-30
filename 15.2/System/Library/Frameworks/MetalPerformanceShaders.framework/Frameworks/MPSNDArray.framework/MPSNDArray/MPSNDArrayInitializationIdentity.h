@interface MPSNDArrayInitializationIdentity : MPSNDArrayInitialization

- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;

@end

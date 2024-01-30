@interface MPSNDArrayInitializationRandomUniform : MPSNDArrayInitialization

@property (readonly, nonatomic) float minimum;
@property (readonly, nonatomic) float maximum;

- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (unsigned long long)kernelDimensionalityForDestinationArray:(id)a0;
- (id)initWithDevice:(id)a0 minimum:(float)a1 maximum:(float)a2 seed:(unsigned long long)a3;

@end

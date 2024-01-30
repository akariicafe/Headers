@interface MPSNDArrayInitializationTruncatedNormal : MPSNDArrayInitialization

@property (readonly, nonatomic) float mean;
@property (readonly, nonatomic) float standardDeviation;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 mean:(float)a1 standardDeviation:(float)a2 seed:(unsigned long long)a3;
- (unsigned long long)kernelDimensionalityForDestinationArray:(id)a0;

@end

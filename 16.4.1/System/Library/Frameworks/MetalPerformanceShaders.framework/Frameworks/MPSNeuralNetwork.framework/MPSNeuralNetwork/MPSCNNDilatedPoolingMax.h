@interface MPSCNNDilatedPoolingMax : MPSCNNPooling

@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)newPlugin;
- (id)debugDescription;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 dilationRateX:(unsigned long long)a3 dilationRateY:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6;

@end

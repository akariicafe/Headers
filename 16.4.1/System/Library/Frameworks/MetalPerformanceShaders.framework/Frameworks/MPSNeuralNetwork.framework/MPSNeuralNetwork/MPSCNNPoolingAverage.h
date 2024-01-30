@interface MPSCNNPoolingAverage : MPSCNNPooling

@property (nonatomic) unsigned long long zeroPadSizeX;
@property (nonatomic) unsigned long long zeroPadSizeY;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)newPlugin;
- (id)debugDescription;
- (BOOL)isResultStateReusedAcrossBatch;
- (BOOL)pluginSupportsBatchEncode;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;

@end

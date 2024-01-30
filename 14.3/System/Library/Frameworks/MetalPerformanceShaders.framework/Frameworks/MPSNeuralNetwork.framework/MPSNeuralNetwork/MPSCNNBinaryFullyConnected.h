@interface MPSCNNBinaryFullyConnected : MPSCNNBinaryConvolution

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 convolutionData:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;
- (id)initWithDevice:(id)a0 convolutionData:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;
- (id)initWithDeviceImpl:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const unsigned int *)a2 outputBiasTerms:(const float *)a3 outputScaleTerms:(const float *)a4 inputBiasTerms:(const float *)a5 inputScaleTerms:(const float *)a6 type:(unsigned long long)a7 flags:(unsigned long long)a8;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDeviceImpl:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const unsigned int *)a2 scaleValue:(float)a3 type:(unsigned long long)a4 flags:(unsigned long long)a5;
- (void)encodeWithCoder:(id)a0;

@end

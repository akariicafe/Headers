@class MPSNNNeuronDescriptor;

@interface MPSPluginCNNConvolutionDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;
@property (readonly, nonatomic) unsigned long long groups;
@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;
@property (readonly, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor;
@property (readonly, nonatomic) unsigned long long channelMultiplier;
@property (readonly, nonatomic) unsigned long long subPixelScaleFactor;
@property (readonly, nonatomic) BOOL isFullyConnected;
@property (readonly, nonatomic) BOOL isConvolutionTranspose;

- (void)dealloc;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 strideInPixelsX:(unsigned long long)a4 strideInPixelsY:(unsigned long long)a5 groups:(unsigned long long)a6 dilationRateX:(unsigned long long)a7 dilationRateY:(unsigned long long)a8 channelMultiplier:(unsigned long long)a9 subPixelScaleFactor:(unsigned long long)a10 isFullyConnected:(BOOL)a11 isConvolutionTranspose:(BOOL)a12 fusedNeuronDescriptor:(id)a13;

@end

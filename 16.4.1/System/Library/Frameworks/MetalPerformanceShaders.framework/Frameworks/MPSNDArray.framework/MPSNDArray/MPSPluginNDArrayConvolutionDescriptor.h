@interface MPSPluginNDArrayConvolutionDescriptor : NSObject

@property (readonly, nonatomic) struct MPSPluginNDArrayConvolutionSizes { unsigned long long size[3]; } kernelSizes;
@property (readonly, nonatomic) struct MPSPluginNDArrayConvolutionSizes { unsigned long long size[3]; } strides;
@property (readonly, nonatomic) struct MPSPluginNDArrayConvolutionSizes { unsigned long long size[3]; } dilationRates;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (readonly, nonatomic) unsigned long long groups;
@property (readonly, nonatomic) unsigned long long channelMultiplier;
@property (readonly, nonatomic) unsigned long long subPixelScaleFactor;
@property (readonly, nonatomic) unsigned int dataFormat;
@property (readonly, nonatomic) unsigned int weightsFormat;

- (id)initWithKernelSizes:(struct MPSPluginNDArrayConvolutionSizes { unsigned long long x0[3]; })a0 inputFeatureChannels:(unsigned long long)a1 outputFeatureChannels:(unsigned long long)a2 strides:(struct MPSPluginNDArrayConvolutionSizes { unsigned long long x0[3]; })a3 dilationRates:(struct MPSPluginNDArrayConvolutionSizes { unsigned long long x0[3]; })a4 groups:(unsigned long long)a5 channelMultiplier:(unsigned long long)a6 subPixelScaleFactor:(unsigned long long)a7 dataFormat:(unsigned int)a8 weightsFormat:(unsigned int)a9;

@end

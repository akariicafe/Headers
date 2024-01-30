@interface TCMLCHARDescriptor : NSObject

+ (id)defineGraphConvDescriptor:(id)a0 inputChannels:(unsigned long long)a1 outputChannels:(unsigned long long)a2 numKeypoints:(unsigned long long)a3 temporalKernelSize:(unsigned long long)a4 stride:(unsigned long long)a5 dropout:(float)a6;
+ (id)defineResidualDescriptor:(id)a0 inputChannels:(unsigned long long)a1 outputChannels:(unsigned long long)a2 stride:(unsigned long long)a3;
+ (id)defineSTGCNActionDescriptor:(id)a0 inputChannels:(unsigned long long)a1 batchSize:(unsigned long long)a2 numFrames:(unsigned long long)a3 numKeypoints:(unsigned long long)a4 numClass:(unsigned long long)a5 dropout:(float)a6;
+ (id)defineSTGCNDescriptor:(id)a0 inputChannels:(unsigned long long)a1 outputChannels:(unsigned long long)a2 numKeypoints:(unsigned long long)a3 temporalKernelSize:(unsigned long long)a4 stride:(unsigned long long)a5 dropout:(float)a6 residual:(BOOL)a7;
+ (id)defineTemporalConvolutionalNetworkDescriptor:(id)a0 channels:(unsigned long long)a1 temporalKernelSize:(unsigned long long)a2 stride:(unsigned long long)a3 dropout:(float)a4;

@end

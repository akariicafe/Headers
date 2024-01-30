@class TCMPSInstanceNormalizationDescriptor, TCMPSUpsamplingDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSDecodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst;
@property (retain, nonatomic) TCMPSUpsamplingDescriptor *upsample;

- (void).cxx_destruct;
- (id)init;

@end

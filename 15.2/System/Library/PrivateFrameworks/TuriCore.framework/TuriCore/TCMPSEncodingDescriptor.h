@class TCMPSInstanceNormalizationDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSEncodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst;

- (void).cxx_destruct;
- (id)init;

@end

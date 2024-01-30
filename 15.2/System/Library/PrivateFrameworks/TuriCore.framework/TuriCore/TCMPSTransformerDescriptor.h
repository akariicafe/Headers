@class TCMPSResidualDescriptor, TCMPSEncodingDescriptor, TCMPSConvolutionDescriptor, TCMPSInstanceNormalizationDescriptor, TCMPSDecodingDescriptor;

@interface TCMPSTransformerDescriptor : NSObject

@property (retain, nonatomic) TCMPSEncodingDescriptor *encode1;
@property (retain, nonatomic) TCMPSEncodingDescriptor *encode2;
@property (retain, nonatomic) TCMPSEncodingDescriptor *encode3;
@property (retain, nonatomic) TCMPSResidualDescriptor *residual1;
@property (retain, nonatomic) TCMPSResidualDescriptor *residual2;
@property (retain, nonatomic) TCMPSResidualDescriptor *residual3;
@property (retain, nonatomic) TCMPSResidualDescriptor *residual4;
@property (retain, nonatomic) TCMPSResidualDescriptor *residual5;
@property (retain, nonatomic) TCMPSDecodingDescriptor *decode1;
@property (retain, nonatomic) TCMPSDecodingDescriptor *decode2;
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst;

- (void).cxx_destruct;
- (id)init;

@end

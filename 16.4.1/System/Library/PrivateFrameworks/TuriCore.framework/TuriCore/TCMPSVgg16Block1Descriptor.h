@class TCMPSPoolingDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSVgg16Block1Descriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv1;
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv2;
@property (retain, nonatomic) TCMPSPoolingDescriptor *pooling;

- (id)init;
- (void).cxx_destruct;

@end

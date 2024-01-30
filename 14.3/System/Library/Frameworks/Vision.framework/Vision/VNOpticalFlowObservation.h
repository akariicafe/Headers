@class VNImageSignature, LKTOpticalFlow;

@interface VNOpticalFlowObservation : VNPixelBufferObservation

@property (retain, nonatomic) VNImageSignature *targetImageSignature;
@property (retain, nonatomic) LKTOpticalFlow *opticalFlow;

- (void).cxx_destruct;

@end

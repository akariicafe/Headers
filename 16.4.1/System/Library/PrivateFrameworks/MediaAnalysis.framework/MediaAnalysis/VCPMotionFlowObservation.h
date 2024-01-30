@interface VCPMotionFlowObservation : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) int revision;

- (void)dealloc;

@end

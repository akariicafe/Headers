@interface CVADepthIR : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) struct __CVBuffer { } *dataBuffer;

- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end

@interface ABPKImageData : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end

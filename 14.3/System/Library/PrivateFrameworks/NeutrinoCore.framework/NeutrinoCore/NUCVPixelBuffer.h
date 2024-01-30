@interface NUCVPixelBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;

- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;

@end

@interface NUCVPixelBuffer : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;

- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)init;
- (void)dealloc;

@end

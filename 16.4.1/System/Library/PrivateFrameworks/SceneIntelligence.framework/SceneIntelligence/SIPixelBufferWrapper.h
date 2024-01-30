@interface SIPixelBufferWrapper : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0 pixelformat:(unsigned int)a1;

@end

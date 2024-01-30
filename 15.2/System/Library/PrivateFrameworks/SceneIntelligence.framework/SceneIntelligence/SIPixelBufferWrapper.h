@interface SIPixelBufferWrapper : NSObject

@property struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0;
- (id)initWithResolution:(struct CGSize { double x0; double x1; })a0 pixelformat:(unsigned int)a1;

@end

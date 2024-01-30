@interface JFXPixelBufferPool : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned int type;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (struct __CVBuffer { } *)createPixelBuffer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 type:(unsigned int)a1;

@end

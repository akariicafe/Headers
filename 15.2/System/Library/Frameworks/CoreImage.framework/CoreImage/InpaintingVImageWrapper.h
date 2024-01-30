@interface InpaintingVImageWrapper : NSObject {
    BOOL freeWhenDone;
    int _bpp;
}

@property (readonly) struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *image;
@property (readonly, getter=getWidth) int width;
@property (readonly, getter=getHeight) int height;
@property (readonly, getter=getBytesPerPixel) int bytesPerPixel;
@property (readonly, getter=getBytesPerRow) int bytesPerRow;
@property (readonly, getter=getData) void *data;

+ (id)vImageWrapperByCroppingWrapper:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)createVImageWrapperForProcessorInput:(id)a0 thatMatchesOutput:(id)a1;

- (void)free;
- (id)initWithWidth:(int)a0 height:(int)a1 bpp:(int)a2 bytes:(void *)a3 freeBytesWhenDone:(BOOL)a4;
- (id)initWithShapeOf:(id)a0;
- (void)dealloc;
- (id)initWithWidth:(int)a0 height:(int)a1 bpp:(int)a2 bpr:(int)a3 bytes:(void *)a4 freeBytesWhenDone:(BOOL)a5;
- (id)initWithWidth:(int)a0 height:(int)a1 bpp:(int)a2;

@end

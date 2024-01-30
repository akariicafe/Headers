@class UIImage;

@interface GKImageContext : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGContext { } *CGContext;
@property (readonly, nonatomic) UIImage *image;

+ (id)contextDrawnWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(unsigned int)a2 usingBlock:(id /* block */)a3;
+ (id)imageDrawnWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(unsigned int)a2 usingBlock:(id /* block */)a3;
+ (id)imageFromRawPixelsAtURL:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(unsigned int)a2;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(unsigned int)a2 data:(void *)a3;
- (BOOL)writeRawPixelsToURL:(id)a0 error:(id *)a1;

@end

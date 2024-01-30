@interface PixelBufferPoolKey : NSObject <NSCopying>

@property (readonly) struct CGSize { double width; double height; } frameSize;
@property (readonly) unsigned int pixelFormatType;

- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormatType:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

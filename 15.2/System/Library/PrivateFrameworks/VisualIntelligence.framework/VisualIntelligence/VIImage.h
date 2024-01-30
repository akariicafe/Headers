@interface VIImage : NSObject <NSCopying>

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

@end

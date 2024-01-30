@interface NTKRawImage : NSObject

@property (readonly, nonatomic) const float *contents;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;

+ (id)rawImageWithImage:(id)a0 width:(int)a1 height:(int)a2;

- (void)write:(id)a0;
- (void)dealloc;
- (id)initWithContent:(void *)a0 width:(int)a1 height:(int)a2;
- (id)scaleToWidth:(int)a0 height:(int)a1;

@end

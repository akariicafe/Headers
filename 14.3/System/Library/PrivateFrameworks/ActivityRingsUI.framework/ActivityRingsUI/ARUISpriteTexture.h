@protocol MTLTexture;

@interface ARUISpriteTexture : NSObject <NSCopying>

@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) id<MTLTexture> texture;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

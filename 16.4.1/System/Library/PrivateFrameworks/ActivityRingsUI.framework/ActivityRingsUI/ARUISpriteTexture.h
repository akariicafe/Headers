@protocol MTLTexture;

@interface ARUISpriteTexture : NSObject <NSCopying>

@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) id<MTLTexture> texture;

- (id)initWithImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end

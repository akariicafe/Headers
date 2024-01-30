@class NSArray, ARUISpriteTexture;

@interface ARUISpriteSheet : NSObject <NSCopying>

@property (readonly, nonatomic) ARUISpriteTexture *texture;
@property (readonly, nonatomic) NSArray *sprites;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSpriteSheet:(id)a0;
- (id)initWithTexture:(id)a0 sprites:(id)a1;

@end

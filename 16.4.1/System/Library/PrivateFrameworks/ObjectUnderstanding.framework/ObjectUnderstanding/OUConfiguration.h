@interface OUConfiguration : NSObject <NSCopying>

@property (nonatomic) float maxFramerate;
@property (nonatomic) BOOL enableRgbRefinement;
@property (nonatomic) BOOL enableMLRefinement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithframerate:(float)a0 rgbRefinemnt:(BOOL)a1 mlRefinement:(BOOL)a2;

@end

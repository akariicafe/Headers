@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) double pixelAspectRatio;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

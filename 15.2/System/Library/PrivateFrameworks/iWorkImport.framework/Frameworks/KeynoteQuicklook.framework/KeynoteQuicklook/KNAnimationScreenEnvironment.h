@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) double pixelAspectRatio;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end

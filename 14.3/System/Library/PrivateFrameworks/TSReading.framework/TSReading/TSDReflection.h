@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double fadeAcceleration;

+ (id)reflection;
+ (BOOL)canMixWithNilObjects;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithOpacity:(double)a0;
- (id)initWithOpacity:(double)a0 fadeAcceleration:(double)a1;

@end

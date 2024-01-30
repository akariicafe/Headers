@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) double inflection;

+ (id)gradientStopWithColor:(id)a0 fraction:(double)a1;
+ (id)gradientStopWithColor:(id)a0 fraction:(double)a1 inflection:(double)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 fraction:(double)a1;
- (id)gradientStopWithColor:(id)a0;
- (id)gradientStopWithInflection:(double)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithColor:(id)a0 fraction:(double)a1 inflection:(double)a2;
- (id)initWithGradientStop:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)p_setColor:(id)a0;
- (void)p_setFraction:(double)a0;
- (void)p_setInflection:(double)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end

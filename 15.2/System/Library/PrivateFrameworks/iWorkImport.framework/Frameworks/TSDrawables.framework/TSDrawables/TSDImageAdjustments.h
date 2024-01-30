@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    double _exposure;
    double _saturation;
    double _contrast;
    double _highlights;
    double _shadows;
    double _sharpness;
    double _denoise;
    double _temperature;
    double _tint;
    double _bottomLevel;
    double _topLevel;
    double _gamma;
    BOOL _enhance;
    BOOL _representsSageAdjustments;
}

@property (readonly, nonatomic) double exposure;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double contrast;
@property (readonly, nonatomic) double highlights;
@property (readonly, nonatomic) double shadows;
@property (readonly, nonatomic) double sharpness;
@property (readonly, nonatomic) double denoise;
@property (readonly, nonatomic) double temperature;
@property (readonly, nonatomic) double tint;
@property (readonly, nonatomic) double bottomLevel;
@property (readonly, nonatomic) double topLevel;
@property (readonly, nonatomic) double gamma;
@property (readonly, nonatomic) BOOL enhance;
@property (readonly, nonatomic) BOOL representsSageAdjustments;

+ (BOOL)canMixWithNilObjects;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)imageAdjustmentsWithoutEnhance;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)i_initFromDefaultArchive;

@end

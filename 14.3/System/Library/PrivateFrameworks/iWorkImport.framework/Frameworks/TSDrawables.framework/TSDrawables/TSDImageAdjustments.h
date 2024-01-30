@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    double mExposure;
    double mSaturation;
    double mContrast;
    double mHighlights;
    double mShadows;
    double mSharpness;
    double mDenoise;
    double mTemperature;
    double mTint;
    double mBottomLevel;
    double mTopLevel;
    double mGamma;
    BOOL mEnhance;
    BOOL mRepresentsSageAdjustments;
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

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)imageAdjustmentsWithoutEnhance;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; BOOL x16; float x17; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ImageAdjustmentsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; BOOL x16; float x17; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)i_initFromDefaultArchive;

@end

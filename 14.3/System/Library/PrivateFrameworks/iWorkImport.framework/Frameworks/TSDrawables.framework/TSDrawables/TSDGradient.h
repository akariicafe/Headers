@class NSArray, NSMutableArray, TSUColor;

@interface TSDGradient : TSDFill <TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying> {
    NSMutableArray *mStops;
    struct CGShading { } *mShadingRef;
}

@property (readonly, retain, nonatomic) NSArray *gradientStops;
@property (readonly, nonatomic) TSUColor *firstColor;
@property (readonly, nonatomic) TSUColor *lastColor;
@property (readonly, nonatomic) unsigned long long gradientType;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) struct CGShading { } *shadingRef;
@property (readonly, nonatomic) BOOL isAdvancedGradient;
@property (readonly, nonatomic) BOOL hasAlpha;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
+ (BOOL)useInflections;
+ (void)enableInflections;
+ (void)disableInflections;
+ (BOOL)useQuartzShadings;
+ (void)sortStopsArray:(id)a0;
+ (id)linearGradientWithStartColor:(id)a0 endColor:(id)a1;
+ (id)linearGradientWithGradientStops:(id)a0;
+ (id)radialGradientWithStartColor:(id)a0 endColor:(id)a1;
+ (id)radialGradientWithGradientStops:(id)a0;
+ (id)instanceWithArchive:(const struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 unarchiver:(id)a1;

- (id)stopAtIndex:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)referenceColor;
- (unsigned long long)hash;
- (long long)fillType;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)presetKind;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)newColorAtFraction:(double)a0;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1 opacity:(double)a2;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1;
- (void)releaseShadingRef;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (id)stopBeforeFraction:(double)a0;
- (id)stopAfterFraction:(double)a0;
- (id)p_insertStopAtFraction:(double)a0 withColor:(id)a1;
- (void)p_insertGradientStop:(id)a0;
- (BOOL)isEqualIgnoringTransform:(id)a0;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })centeredRadialTransformInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_setAlpha:(struct CGContext { } *)a0;
- (struct CGContext { } *)p_beginBitmapWrapperContextInContext:(struct CGContext { } *)a0 returningIntegralBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)p_endBitmapWrapperContext:(struct CGContext { } *)a0 inContext:(struct CGContext { } *)a1 withIntegralBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_setGradientStops:(id)a0;
- (void)p_removeStop:(id)a0;
- (id)p_removeStopAtIndex:(unsigned long long)a0;
- (id)p_insertStopAtFraction:(double)a0;
- (void)p_reverseStopOrder;
- (void)p_evenlyDistributeStops;
- (void)p_setGradientType:(unsigned long long)a0;
- (void)p_moveStopAtIndex:(unsigned long long)a0 toFraction:(double)a1;
- (void)p_swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;
- (void)p_setColorOfStopAtIndex:(unsigned long long)a0 toColor:(id)a1;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (id)initWithArchive:(const struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)p_setOpacity:(double)a0;
- (void)p_setIsAdvancedGradient:(BOOL)a0;

@end

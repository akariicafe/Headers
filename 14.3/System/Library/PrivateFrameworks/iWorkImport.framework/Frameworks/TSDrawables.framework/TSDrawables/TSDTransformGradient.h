@interface TSDTransformGradient : TSDGradient <TSDMixing> {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransformBeforeUpgrade;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) struct CGSize { double width; double height; } baseNaturalSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqualIgnoringTransform:(id)a0;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (double)gradientAngleInDegrees;
- (void)p_setDefaultValues;
- (struct CGSize { double x0; double x1; })baseNaturalSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_drawQuartzShadingInContext:(struct CGContext { } *)a0 withGradientNaturalSize:(struct CGSize { double x0; double x1; })a1 baseNaturalSize:(struct CGSize { double x0; double x1; })a2 start:(struct CGPoint { double x0; double x1; })a3 end:(struct CGPoint { double x0; double x1; })a4;
- (struct CGPoint { double x0; double x1; })normalizedPointForSize:(struct CGSize { double x0; double x1; })a0 endPoint:(BOOL)a1;
- (id)initWithGradient:(id)a0 inPath:(id)a1 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })p_scalePoint:(struct CGPoint { double x0; double x1; })a0 toShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })p_scalePoint:(struct CGPoint { double x0; double x1; })a0 fromShapeWithNaturalSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithArchive:(const struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 archiver:(id)a1;
- (void)p_setStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setBaseNaturalSize:(struct CGSize { double x0; double x1; })a0;

@end

@interface TSDAngleGradient : TSDGradient <TSDMixing>

@property (nonatomic) double gradientAngle;
@property (readonly, nonatomic) double gradientAngleInDegrees;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1 opacity:(double)a2 angle:(double)a3;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_shadingTransformForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)p_bestGradientLengthForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atAngle:(double)a1;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2 angle:(double)a3;
- (id)initWithArchive:(const struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct FillArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Color *x5; struct GradientArchive *x6; struct ImageFillArchive *x7; } *)a0 archiver:(id)a1;
- (void)p_paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end

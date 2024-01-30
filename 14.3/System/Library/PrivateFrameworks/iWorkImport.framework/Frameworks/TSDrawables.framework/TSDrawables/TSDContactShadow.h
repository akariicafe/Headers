@interface TSDContactShadow : TSDShadow

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double perspective;

+ (id)contactShadowWithOffset:(double)a0 height:(double)a1 radius:(double)a2 opacity:(double)a3 color:(id)a4 enabled:(BOOL)a5;
+ (id)instanceWithArchive:(const struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)shadowType;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithOffset:(double)a0 height:(double)a1 radius:(double)a2 opacity:(double)a3 color:(id)a4 enabled:(BOOL)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (double)clampOffset:(double)a0;
- (double)clampRadius:(double)a0;
- (id)newShadowClampedForSwatches;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (struct CGImage { } *)newShadowImageFromContext:(struct CGContext { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 unflipped:(BOOL)a3;
- (id)initWithArchive:(const struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ShadowArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct DropShadowArchive *x5; struct ContactShadowArchive *x6; struct CurvedShadowArchive *x7; int x8; BOOL x9; float x10; float x11; int x12; float x13; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end

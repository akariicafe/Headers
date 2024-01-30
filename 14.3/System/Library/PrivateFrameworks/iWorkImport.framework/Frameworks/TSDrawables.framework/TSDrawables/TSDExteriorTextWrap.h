@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL isHTMLWrap;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) int fitType;
@property (readonly, nonatomic) double margin;
@property (readonly, nonatomic) double alphaThreshold;

+ (id)exteriorTextWrapWithIsHTMLWrap:(BOOL)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;
+ (id)exteriorTextWrap;
+ (id)defaultExteriorTextWrap;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; BOOL x9; } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsHTMLWrap:(BOOL)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;
- (void)saveToArchive:(struct ExteriorTextWrapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; BOOL x9; } *)a0 archiver:(id)a1;

@end

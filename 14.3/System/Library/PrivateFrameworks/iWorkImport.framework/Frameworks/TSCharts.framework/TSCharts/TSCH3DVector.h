@interface TSCH3DVector : NSObject <TSSPropertyValueArchiving, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;
@property (readonly, nonatomic) float z;
@property (readonly, nonatomic) float w;

+ (id)vector;
+ (id)x:(float)a0 y:(float)a1 z:(float)a2;
+ (id)instanceWithArchive:(const struct Chart3DVectorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; } *)a0 unarchiver:(id)a1;
+ (id)x:(float)a0 y:(float)a1 z:(float)a2 w:(float)a3;
+ (unsigned long long)hashVec4:(const struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } *)a0;
+ (id)vectorWithVec2:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
+ (id)vectorWithVec3:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
+ (id)vectorWithVec4:(const struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } *)a0;

- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })value3;
- (id)init;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })value2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })value4;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })value;
- (float)valueForDimension:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;
- (id)initWithArchive:(const struct Chart3DVectorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DVectorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; float x6; float x7; } *)a0 archiver:(id)a1;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2 w:(float)a3;
- (id)initWithVec4:(const struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } *)a0;
- (id)initWithVec2:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (id)initWithVec3:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;

@end

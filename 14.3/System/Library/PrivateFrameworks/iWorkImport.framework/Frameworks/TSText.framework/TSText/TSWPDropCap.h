@interface TSWPDropCap : TSKSosBase <NSCopying, NSMutableCopying>

@property (nonatomic) long long dropCapType;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfRaisedLines;
@property (nonatomic) double outdent;
@property (nonatomic) double padding;
@property (nonatomic) BOOL shapeEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double characterScale;
@property (nonatomic) long long wrapType;
@property (nonatomic) unsigned long long numberOfCharacters;

+ (id)dropCap;
+ (Class)mutableClass;
+ (id)instanceWithArchive:(const struct DropCapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; unsigned int x5; float x6; float x7; int x8; BOOL x9; float x10; float x11; double x12; double x13; double x14; unsigned int x15; unsigned int x16; double x17; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)localizationDictionary;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct DropCapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; unsigned int x5; float x6; float x7; int x8; BOOL x9; float x10; float x11; double x12; double x13; double x14; unsigned int x15; unsigned int x16; double x17; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct DropCapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; unsigned int x5; float x6; float x7; int x8; BOOL x9; float x10; float x11; double x12; double x13; double x14; unsigned int x15; unsigned int x16; double x17; } *)a0 archiver:(id)a1;
- (id)initWithLocalizationDictionary:(id)a0;
- (void)setValuesWithLocalizationDictionary:(id)a0;
- (id)initWithType:(long long)a0 numberOfLines:(unsigned long long)a1 numberOfRaisedLines:(unsigned long long)a2 outdent:(double)a3 padding:(double)a4 shapeEnabled:(BOOL)a5 cornerRadius:(double)a6 characterScale:(double)a7 wrapType:(long long)a8 numberOfCharacters:(unsigned long long)a9;
- (id)initWithType:(long long)a0 numberOfLines:(unsigned long long)a1 numberOfRaisedLines:(unsigned long long)a2;

@end

@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) double amount;
@property (readonly, nonatomic) double baselineRule;

+ (id)lineSpacing;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMode:(long long)a0 amount:(double)a1;
- (id)initWithArchive:(const struct LineSpacingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; float x5; float x6; } *)a0 unarchiver:(id)a1;
- (id)initWithMode:(long long)a0 amount:(double)a1 baselineRule:(double)a2;
- (void)saveToArchive:(struct LineSpacingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; float x5; float x6; } *)a0 archiver:(id)a1;
- (id)initWithLocalizationDictionary:(id)a0;

@end

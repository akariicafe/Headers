@interface TSWPRuleOffset : NSObject <TSSPropertyValueArchiving, NSCopying>

@property (readonly, nonatomic) double dX;
@property (readonly, nonatomic) double dY;

+ (id)ruleOffset;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;
+ (id)ruleOffsetWithDX:(double)a0 dY:(double)a1;

- (struct CGSize { double x0; double x1; })sizeValue;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint { double x0; double x1; })pointValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct Point { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; } *)a0 unarchiver:(id)a1;
- (id)initWithDX:(double)a0 dY:(double)a1;
- (void)saveToArchive:(struct Point { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; float x4; float x5; } *)a0 archiver:(id)a1;

@end

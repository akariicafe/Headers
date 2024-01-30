@class NSUUID, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLineNonStyleItem : NSObject

@property (retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithNonStyle:(id)a0 uuid:(id)a1;
- (id)initFromUnarchiver:(id)a0 message:(const struct ChartReferenceLineNonStyleItem { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct UUID *x5; } *)a1;
- (void)saveToArchiver:(id)a0 message:(struct ChartReferenceLineNonStyleItem { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct UUID *x5; } *)a1;

@end

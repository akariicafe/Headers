@class DEMatchCriteria;

@interface DEFilter : NSObject

@property (retain, nonatomic) DEMatchCriteria *include;
@property (retain, nonatomic) DEMatchCriteria *exclude;

+ (void)filterToPb:(id)a0 filterPb:(struct Filter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct MatchCriteria *x4; struct MatchCriteria *x5; } *)a1;
+ (id)filterFromPb:(const struct Filter { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct MatchCriteria *x4; struct MatchCriteria *x5; } *)a0;
+ (id)catUpdates:(id)a0;
+ (id)filterThroughPb:(id)a0;
+ (id)catUpdates;
+ (id)deprecatedCatSummary;

- (id)initWithInclude:(id)a0 exclude:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)allows:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)apply:(id /* block */)a0 to:(id)a1;

@end

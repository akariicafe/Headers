@class NSArray;

@interface DEMatchCriteria : NSObject

@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) NSArray *suffixes;

+ (id)matchCriteriaFromPb:(const struct MatchCriteria { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; } *)a0;
+ (void)matchCriteriaToPb:(id)a0 matchCriteriaPb:(struct MatchCriteria { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; } *)a1;

- (BOOL)any:(id)a0;
- (BOOL)all:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrefixes:(id)a0 suffixes:(id)a1;

@end

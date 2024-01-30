@protocol TSPProxyObjectMapping;

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>

@property (readonly, nonatomic) long long targetType;
@property (weak, nonatomic) id<TSPProxyObjectMapping> proxyObjectMapping;

- (void).cxx_destruct;
- (void)setStrongReference:(id)a0 message:(struct Reference { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned long long x4; int x5; BOOL x6; } *)a1;
- (void)setStrongLazyReference:(id)a0 message:(struct Reference { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; unsigned long long x4; int x5; BOOL x6; } *)a1;

@end

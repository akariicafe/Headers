@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) int fromIndex;
@property (readonly, nonatomic) int toIndex;
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) BOOL isDominating;

+ (id)stringForPlacementType:(int)a0;

- (unsigned long long)hash;
- (id)toString;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchiver:(id)a0 message:(struct Operation { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; int x12; int x13; unsigned long long x14; int x15; unsigned int x16; int x17; int x18; } *)a1;
- (id)initWithAddress:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(BOOL)a3 noop:(BOOL)a4;
- (id)initWithUnarchiver:(id)a0 message:(const struct Operation { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; int x12; int x13; unsigned long long x14; int x15; unsigned int x16; int x17; int x18; } *)a1;
- (id)operationWithNewNoop:(BOOL)a0;
- (id)initWithAddress:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0 fromIndex:(int)a1 toIndex:(int)a2;

@end

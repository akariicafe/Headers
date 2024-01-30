@class NSString, TSUUUIDPath;

@interface TSKCOAbstractOperation : NSObject {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } _address;
}

@property (readonly, nonatomic) BOOL isNoop;
@property (readonly, nonatomic) TSUUUIDPath *UUIDPath;
@property (readonly, nonatomic) const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *UUIDAddress;
@property (readonly, nonatomic) NSString *toString;

+ (id)newObjectForUnarchiver:(id)a0 message:(const struct Message { void /* function */ **x0; } *)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchiver:(id)a0 message:(struct Operation { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; int x12; int x13; unsigned long long x14; int x15; unsigned int x16; int x17; int x18; } *)a1;
- (id)initWithUnarchiver:(id)a0 message:(const struct Operation { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; BOOL x8; BOOL x9; BOOL x10; unsigned int x11; int x12; int x13; unsigned long long x14; int x15; unsigned int x16; int x17; int x18; } *)a1;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (void)populateRangeVector:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *)a0 fromRangeList:(const struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } *)a1;
- (void)saveRangeVector:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *)a0 rangeList:(struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } *)a1;
- (id)initWithAddress:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0 noop:(BOOL)a1;
- (void)populateAddressFromIdentifier:(const struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } *)a0;
- (void)saveAddress:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0 identifier:(struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } *)a1;

@end

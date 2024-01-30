@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } orderedUuids;
@property unsigned int offset;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToMessage:(struct RewriteRangeEntryArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (id)initFromMessage:(const struct RewriteRangeEntryArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 orderedUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a1 offset:(unsigned int)a2;

@end

@interface TSTCellUIDRegion : TSKSosBase {
    struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *__begin_; struct UUIDRect<TSP::UUIDRect> *__end_; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *__value_; } __end_cap_; } _cellUIDRangeList;
}

@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)cellUIDRegionFromRegion:(id)a0 inTableModel:(id)a1;
+ (id)cellUIDRegionFromRegion:(id)a0 inTable:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToMessage:(struct CellUIDRegionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUIDRectArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id)initFromMessage:(const struct CellUIDRegionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUIDRectArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id)cellRegionFromTable:(id)a0;
- (id)initWithCellUIDRangeVector:(const struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; struct UUIDRect<TSP::UUIDRect> *x1; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; } x2; } *)a0;
- (id)pruneAgainstTable:(id)a0;
- (void)enumerateCellUIDRangesUsingBlock:(id /* block */)a0;
- (void)enumerateCellUIDUsingBlock:(id /* block */)a0;
- (struct vector<TSU::UUIDRect<TSP::UUIDRect>, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; struct UUIDRect<TSP::UUIDRect> *x1; struct __compressed_pair<TSU::UUIDRect<TSP::UUIDRect> *, std::__1::allocator<TSU::UUIDRect<TSP::UUIDRect> > > { struct UUIDRect<TSP::UUIDRect> *x0; } x2; })subRangesOfCellCount:(unsigned long long)a0;

@end

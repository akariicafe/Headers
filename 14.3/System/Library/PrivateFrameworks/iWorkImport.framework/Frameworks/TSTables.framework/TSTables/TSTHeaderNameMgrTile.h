@class NSString, TSTHeaderNameMgr;

@interface TSTHeaderNameMgrTile : TSPObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tileLock;
    struct map<NSString *, TSTHeaderNameMgrEntry *, std::__1::less<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, TSTHeaderNameMgrEntry *> > > { struct __tree<std::__1::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__1::__map_value_compare<NSString *, std::__1::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__1::less<NSString *>, true>, std::__1::allocator<std::__1::__value_type<NSString *, TSTHeaderNameMgrEntry *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<NSString *, TSTHeaderNameMgrEntry *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<NSString *, std::__1::__value_type<NSString *, TSTHeaderNameMgrEntry *>, std::__1::less<NSString *>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _nameFragmentToEntry;
    TSTHeaderNameMgr *_headerNameMgr;
}

@property (retain, nonatomic) NSString *firstFragment;
@property (retain, nonatomic) NSString *lastFragment;
@property (readonly, nonatomic) unsigned long long count;

+ (id)medianStringFromArray:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithHeaderNameMgr:(id)a0 context:(id)a1;
- (void)unpackAfterUnarchive:(id)a0;
- (struct TSTHeaderNameMgrEntry { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSCEUidCellRefSet { struct map<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet, std::__1::less<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet> > > { struct __tree<std::__1::__value_type<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet>, std::__1::__map_value_compare<TSU::UUIDData<TSP::UUIDData>, std::__1::__value_type<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet>, std::__1::less<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__value_type<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSU::UUIDData<TSP::UUIDData>, std::__1::__value_type<TSU::UUIDData<TSP::UUIDData>, TSCEUidCoordSet>, std::__1::less<TSU::UUIDData<TSP::UUIDData> >, true> > { unsigned long long x0; } x2; } x0; } x0; } x1; id x2; } *)fragmentEntryForString:(id)a0 createIfMissing:(BOOL)a1;
- (id)splitTile;

@end

@class NSMutableIndexSet;

@interface TSTTableDataListSegment : TSPObject <TSPCopying> {
    struct unordered_map<unsigned int, TSTTableDataObject *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TSTTableDataObject *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__1::hash<unsigned int>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__1::equal_to<unsigned int>, true> > { float __value_; } __p3_; } __table_; } _data;
}

@property (retain, nonatomic) NSMutableIndexSet *keys;
@property (readonly, nonatomic) int listType;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long estimatedByteSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } keyRange;
@property (readonly, nonatomic) BOOL shouldSplit;

- (id)objectAtIndexedSubscript:(unsigned int)a0;
- (void).cxx_destruct;
- (id)split;
- (id)copyWithContext:(id)a0;
- (id).cxx_construct;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned int)a1;
- (id)packageLocator;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithType:(int)a0 keyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (void)loadObjectsFromDataListArchive:(const struct TableDataList { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableDataList_ListEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; unsigned int x6; int x7; } *)a0 unarchiver:(id)a1;
- (void)encodeObjectsToDataListArchive:(struct TableDataList { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::TableDataList_ListEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; unsigned int x6; int x7; } *)a0 archiver:(id)a1;

@end

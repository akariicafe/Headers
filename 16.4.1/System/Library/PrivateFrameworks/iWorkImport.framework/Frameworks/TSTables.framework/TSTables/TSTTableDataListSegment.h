@class NSMutableIndexSet;

@interface TSTTableDataListSegment : TSPObject <TSPCopying> {
    struct unordered_map<unsigned int, TSTTableDataObject *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSTTableDataObject *>>> { struct __hash_table<std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, TSTTableDataObject *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSTTableDataObject *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSTTableDataObject *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> { float __value_; } __p3_; } __table_; } _data;
}

@property (retain, nonatomic) NSMutableIndexSet *keys;
@property (readonly, nonatomic) int listType;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long estimatedByteSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } keyRange;
@property (readonly, nonatomic) BOOL shouldSplit;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned int)a1;
- (id).cxx_construct;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)objectAtIndexedSubscript:(unsigned int)a0;
- (void).cxx_destruct;
- (id)split;
- (id)copyWithContext:(id)a0;
- (id)packageLocator;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)encodeObjectsToDataListArchive:(void *)a0 archiver:(id)a1;
- (id)initWithType:(int)a0 keyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (void)loadObjectsFromDataListArchive:(const void *)a0 unarchiver:(id)a1;

@end

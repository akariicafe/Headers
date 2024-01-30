@class NSMutableDictionary;

@interface TSCERemoteDataValueMap : NSObject <NSCopying> {
    struct unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__1::hash<unsigned long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__1::equal_to<unsigned long>, true> > { float __value_; } __p3_; } __table_; } _coldDataByYear;
}

@property (retain, nonatomic) NSMutableDictionary *data;
@property (readonly, nonatomic) long long count;

+ (id)valueMap;
+ (id)valueMapWithSpecifier:(id)a0 value:(id)a1;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allSpecifiers;
- (id)initWithData:(id)a0;
- (id)valueForSpecifier:(id)a0;
- (void)removeAllValues;
- (id).cxx_construct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)saveToArchive:(struct RemoteDataValueMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id)initFromArchive:(const struct RemoteDataValueMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (void)p_enumerateYearMapsWithBlock:(id /* block */)a0;
- (void)enumerateSpecifiersAndValuesWithBlock:(id /* block */)a0;
- (BOOL)containsValueForSpecifier:(id)a0;
- (void)setValue:(id)a0 forSpecifier:(id)a1;
- (void)p_saveMap:(id)a0 toArchive:(struct RemoteDataValueMapArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a1;
- (void)removeValueForSpecifier:(id)a0;
- (void)addValuesFromMap:(id)a0;
- (id)updateWithValuesFromMap:(id)a0 overwriteValues:(BOOL)a1;
- (void)removeValuesForSpecifierSet:(id)a0;
- (BOOL)containsValueForAllSpecifiersInSet:(id)a0;
- (id)mapForSpecifiersInSet:(id)a0;
- (id)mapForSingleSpecifier:(id)a0;

@end

@class NSMutableDictionary;

@interface TSCERemoteDataValueMap : NSObject <NSCopying> {
    struct unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> { struct __hash_table<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> { float __value_; } __p3_; } __table_; } _coldDataByYear;
}

@property (retain, nonatomic) NSMutableDictionary *data;
@property (readonly, nonatomic) long long count;

+ (id)valueMap;
+ (id)valueMapWithSpecifier:(id)a0 value:(id)a1;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithData:(id)a0;
- (void)removeAllValues;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)saveToArchive:(void *)a0;
- (id)valueForSpecifier:(id)a0;
- (id)allSpecifiers;
- (id)initFromArchive:(const void *)a0;
- (void)p_enumerateYearMapsWithBlock:(id /* block */)a0;
- (void)enumerateSpecifiersAndValuesWithBlock:(id /* block */)a0;
- (BOOL)containsValueForSpecifier:(id)a0;
- (void)setValue:(id)a0 forSpecifier:(id)a1;
- (void)p_saveMap:(id)a0 toArchive:(void *)a1;
- (void)removeValueForSpecifier:(id)a0;
- (void)addValuesFromMap:(id)a0;
- (id)updateWithValuesFromMap:(id)a0 overwriteValues:(BOOL)a1;
- (void)removeValuesForSpecifierSet:(id)a0;
- (BOOL)containsValueForAllSpecifiersInSet:(id)a0;
- (id)mapForSpecifiersInSet:(id)a0;
- (id)mapForSingleSpecifier:(id)a0;

@end

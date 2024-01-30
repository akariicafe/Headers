@class NSString;
@protocol NSMutableCopying, NSObject;

@interface XRIntKeyedDictionary : NSObject <XRIntKeyedDictionaryImmutable, NSSecureCoding, NSMutableCopying> {
    struct unordered_map<unsigned long long, id, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id>>> { struct __hash_table<std::__hash_value_type<unsigned long long, id>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _hash_map;
    id<NSObject, NSMutableCopying> _prototype;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)allObjects;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)allKeys;
- (void).cxx_destruct;
- (void)enumerateObjectsAndIntegerKeys:(id /* block */)a0;
- (id)objectForIntegerKey:(unsigned long long)a0;
- (void)setObject:(id)a0 forIntegerKey:(unsigned long long)a1;
- (id)initWithIntKeyedDictionary:(id)a0 copyObjects:(BOOL)a1;
- (id)objectForIntegerKey:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)removeObjectForIntegerKey:(unsigned long long)a0;
- (void)setObject:(id)a0 forIntergerKey:(unsigned long long)a1;
- (void)setPrototypeObject:(id)a0;

@end

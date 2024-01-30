@class NSString, NSMutableDictionary, NSFileHandle, NSMutableArray;

@interface MPSANEWeightFileManager : NSObject {
    struct unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> { struct __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>, std::allocator<std::__hash_value_type<void *, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>> { float __value_; } __p3_; } __table_; } _weightsDataIndex;
}

@property (nonatomic) unsigned long long currentDataSizeInBytes;
@property (nonatomic) unsigned long long currentPaddingSizeInBytes;
@property (nonatomic) unsigned long long currentFileSizeInBytes;
@property (readonly, retain, nonatomic) NSString *filePath;
@property (readonly, retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly, retain, nonatomic) NSString *fileDirectoryPath;
@property (readonly, retain, nonatomic) NSMutableArray *weights;
@property (readonly, retain, nonatomic) NSMutableDictionary *weightsInMemoryDictionary;
@property (nonatomic) BOOL useInMemory;

+ (id)weightFileOpsAtPath:(id)a0;

- (id)initWithFilePath:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseWeightsData;
- (long long)writeData:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1 index:(unsigned long long *)a2;

@end

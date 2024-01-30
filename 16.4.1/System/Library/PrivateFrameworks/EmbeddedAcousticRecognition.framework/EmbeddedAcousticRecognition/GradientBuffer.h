@interface GradientBuffer : NSObject {
    BOOL _isSparse;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _data;
    struct unordered_map<int, float, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, float>>> { struct __hash_table<std::__hash_value_type<int, float>, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, float>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, float>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>> { float __value_; } __p3_; } __table_; } _sparseData;
}

@property (readonly) unsigned long long size;

+ (void)initialize;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)accumulateDifferenceBetweenTensorBefore:(id)a0 andTensorAfter:(id)a1 withScale:(float)a2 error:(id *)a3;
- (void)applyToTensor:(id)a0 scale:(float)a1 error:(id *)a2;
- (id)initWithTensorBefore:(id)a0 tensorAfter:(id)a1 withScale:(float)a2 shouldSparsify:(BOOL)a3 error:(id *)a4;
- (float)l2norm;
- (void)multiply:(float)a0;

@end

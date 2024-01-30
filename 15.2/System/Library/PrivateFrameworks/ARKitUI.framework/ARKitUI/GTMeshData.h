@class NSMutableDictionary, NSDictionary, NSURL, GTSubmeshData;

@interface GTMeshData : NSObject {
    NSMutableDictionary *_submeshes;
    GTSubmeshData *_currentSubmesh;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _positions;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _normals;
    struct vector<GTVertexData, std::allocator<GTVertexData>> { struct GTVertexData *__begin_; struct GTVertexData *__end_; struct __compressed_pair<GTVertexData *, std::allocator<GTVertexData>> { struct GTVertexData *__value_; } __end_cap_; } _vertices;
    struct unordered_map<GTVertexData, unsigned int, std::hash<GTVertexData>, std::equal_to<GTVertexData>, std::allocator<std::pair<const GTVertexData, unsigned int>>> { struct __hash_table<std::__hash_value_type<GTVertexData, unsigned int>, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>, std::allocator<std::__hash_value_type<GTVertexData, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>> { float __value_; } __p3_; } __table_; } _vertexMap;
    NSURL *_objUrl;
}

@property (readonly, nonatomic) struct GTVertexData { } *vertexData;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) NSDictionary *submeshes;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (unsigned int)findIndexOrPushVertex:(const struct GTVertexData { } *)a0;
- (BOOL)parseMaterialFile:(id)a0 error:(id *)a1;
- (BOOL)readLine:(id)a0 error:(id *)a1;
- (BOOL)parseOBJFileWith:(id *)a0;

@end

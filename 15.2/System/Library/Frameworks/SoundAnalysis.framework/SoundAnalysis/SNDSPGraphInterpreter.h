@interface SNDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> { struct Interpreter *__value_; } __ptr_; } _interpreter;
}

+ (id)compileText:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
+ (id)compileFile:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
+ (struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> { float x0; } x3; } x0; })stringMapFromStringDictionary:(id)a0;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })stringVectorFromStringArray:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)compileText:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
- (id)compileFile:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;

@end

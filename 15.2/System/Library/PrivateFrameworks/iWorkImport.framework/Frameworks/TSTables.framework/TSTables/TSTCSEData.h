@class NSMutableDictionary;

@interface TSTCSEData : NSObject {
    struct unordered_map<TSTExpressionNode *, TSTCSENodeData, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, std::allocator<std::pair<TSTExpressionNode *const, TSTCSENodeData>>> { struct __hash_table<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>, std::allocator<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSTExpressionNode *, std::__hash_value_type<TSTExpressionNode *, TSTCSENodeData>, std::equal_to<TSTExpressionNode *>, std::hash<TSTExpressionNode *>, true>> { float __value_; } __p3_; } __table_; } _nodesToData;
    NSMutableDictionary *_hashesToNodeSets;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)expressionsMatchingCSENodeData:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a0 forNode:(id)a1;
- (void)recordExpression:(id)a0 data:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a1;
- (id)expressionsIdenticalToExpression:(id)a0;
- (unsigned long long)expressionSize:(id)a0;

@end

@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {
    struct map<int, TSPFieldTreeNode *, std::less<int>, std::allocator<std::pair<const int, TSPFieldTreeNode *>>> { struct __tree<std::__value_type<int, TSPFieldTreeNode *>, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>, std::allocator<std::__value_type<int, TSPFieldTreeNode *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, TSPFieldTreeNode *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addChildNode:(id)a0 forFieldNumber:(int)a1;
- (id)childNodeForFieldNumber:(int)a0;
- (void)saveToArchiver:(id)a0 message:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;

@end

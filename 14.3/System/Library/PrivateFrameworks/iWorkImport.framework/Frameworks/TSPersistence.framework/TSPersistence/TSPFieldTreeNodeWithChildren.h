@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {
    struct map<int, TSPFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPFieldTreeNode *> > > { struct __tree<std::__1::__value_type<int, TSPFieldTreeNode *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSPFieldTreeNode *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, TSPFieldTreeNode *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, TSPFieldTreeNode *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSPFieldTreeNode *>, std::__1::less<int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _children;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToArchiver:(id)a0 message:(struct Message { void /* function */ **x0; } *)a1;
- (id)childNodeForFieldNumber:(int)a0;
- (BOOL)addChildNode:(id)a0 forFieldNumber:(int)a1;

@end

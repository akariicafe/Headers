@interface VKDebugTreeDataNode : VKDebugTreeNode {
    const void *_node;
}

- (BOOL)isExpandable;
- (long long)propertyCount;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (void)buildChildren;
- (id)initWithDebugTreeNode:(const void *)a0 withParent:(id)a1;
- (id)name;

@end

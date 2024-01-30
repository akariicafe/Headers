@interface VKDebugTreePropertyNode : VKDebugTreeNode {
    const void *_property;
}

- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (id)initWithDebugTreeProperty:(const void *)a0 withParent:(id)a1;
- (id)idValueForTreeValue:(const void *)a0;
- (id)name;

@end

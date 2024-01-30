@interface VKDebugTreePropertyNode : VKDebugTreeNode {
    const void *_property;
}

- (id)name;
- (id)idValueForTreeValue:(const void *)a0;
- (id)initWithDebugTreeProperty:(const void *)a0 withParent:(id)a1;
- (id)propertyColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (id)tagsColumn;
- (id)valueColumn;

@end

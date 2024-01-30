@interface AFTreeNodePropertyListSerialization : NSObject

- (id)_propertyListWithTreeNode:(id)a0 itemPropertyListCreation:(id /* block */)a1;
- (id)_treeNodeWithPropertyList:(id)a0 error:(id *)a1 itemCreation:(id /* block */)a2;
- (id)propertyListWithTreeNode:(id)a0 itemPropertyListCreation:(id /* block */)a1;
- (id)treeNodeWithPropertyList:(id)a0 error:(id *)a1 itemCreation:(id /* block */)a2;

@end

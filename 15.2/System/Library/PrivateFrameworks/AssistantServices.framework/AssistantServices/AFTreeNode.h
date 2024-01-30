@class NSMutableArray;

@interface AFTreeNode : NSObject <NSFastEnumeration>

@property (weak, nonatomic, setter=_setParentNode:) AFTreeNode *parentNode;
@property (readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes;
@property (retain, nonatomic) id item;

+ (id)absoluteIndexPathsForTreeNodes:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)absoluteIndexPath;
- (id)indexPathFromAncestorNode:(id)a0;
- (void)_appendDescriptionToString:(id)a0 withIndentation:(id)a1;
- (long long)indexOfChildNode:(id)a0;
- (long long)numberOfChildNodes;
- (id)childNodeAtIndex:(long long)a0;
- (void)enumerateDescendentNodesUsingBlock:(id /* block */)a0;
- (void)removeChildNode:(id)a0;
- (void)removeFromParentNode;
- (id)nodeAtIndexPath:(id)a0;
- (void)insertChildNode:(id)a0 atIndex:(long long)a1;
- (void)removeChildNodeAtIndex:(long long)a0;
- (void)enumerateChildNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsNodeAtIndexPath:(id)a0;
- (id)indexPathOfNodeWithItem:(id)a0;
- (id)lastChildNode;
- (void)addChildNode:(id)a0;
- (void)replaceChildNodeAtIndex:(long long)a0 withNode:(id)a1;
- (void)enumerateChildNodesUsingBlock:(id /* block */)a0;

@end

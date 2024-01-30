@class NSMutableArray;

@interface SRUIFTreeNode : NSObject <NSFastEnumeration>

@property (weak, nonatomic, setter=_setParentNode:) SRUIFTreeNode *parentNode;
@property (readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes;
@property (retain, nonatomic) id item;

+ (id)absoluteIndexPathsForTreeNodes:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addChildNode:(id)a0;
- (void)_appendDescriptionToString:(id)a0 withIndentation:(id)a1;
- (id)absoluteIndexPath;
- (id)childNodeAtIndex:(long long)a0;
- (BOOL)containsNodeAtIndexPath:(id)a0;
- (void)enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)enumerateChildNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateDescendentNodesUsingBlock:(id /* block */)a0;
- (long long)indexOfChildNode:(id)a0;
- (id)indexPathFromAncestorNode:(id)a0;
- (id)indexPathOfNodeWithItem:(id)a0;
- (void)insertChildNode:(id)a0 atIndex:(long long)a1;
- (id)lastChildNode;
- (id)nodeAtIndexPath:(id)a0;
- (long long)numberOfChildNodes;
- (void)removeChildNode:(id)a0;
- (void)removeChildNodeAtIndex:(long long)a0;
- (void)removeFromParentNode;
- (void)replaceChildNodeAtIndex:(long long)a0 withNode:(id)a1;

@end

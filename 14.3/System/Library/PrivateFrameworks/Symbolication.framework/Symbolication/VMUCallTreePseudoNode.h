@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (BOOL)isPseudo;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;
- (id)largestTopOfStackPath;

@end

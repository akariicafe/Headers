@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (BOOL)isPseudo;
- (id)largestTopOfStackPath;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;

@end

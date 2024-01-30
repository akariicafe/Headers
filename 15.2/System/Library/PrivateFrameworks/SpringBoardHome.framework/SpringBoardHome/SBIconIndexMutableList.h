@class NSString, NSMutableArray, NSMapTable;
@protocol SBIconIndexNode, SBIconIndexMutableListObserver;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration, NSCopying> {
    NSMutableArray *_nodes;
    NSMapTable *_index;
}

@property (weak, nonatomic) id<SBIconIndexMutableListObserver> observer;
@property (readonly, nonatomic) id<SBIconIndexNode> firstNode;
@property (readonly, nonatomic) id<SBIconIndexNode> lastNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNodes:(id)a0;
- (void)removeNode:(id)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (id)nodes;
- (void)sortUsingSelector:(SEL)a0;
- (void)addNode:(id)a0;
- (void)removeAllNodes;
- (id)nodesAlongIndexPath:(id)a0 consumedIndexes:(unsigned long long)a1;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (unsigned long long)indexOfNodeAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)nodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeNodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)assertIndexCoherent;
- (void)enumerateNodesAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)replaceNodeAtIndex:(unsigned long long)a0 withNode:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeNodesAtIndexes:(id)a0;
- (void)removeNodeAtIndex:(unsigned long long)a0;
- (void)removeNodesInArray:(id)a0;
- (void)sortUsingComparator:(id /* block */)a0;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)enumerateNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)containedNodeIdentifiers;
- (id)init;
- (void)moveNode:(id)a0 toIndex:(unsigned long long)a1;
- (id)indexPathsForContainedNodeIdentifier:(id)a0 prefixPath:(id)a1;
- (BOOL)containsNodeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsNode:(id)a0;
- (unsigned long long)count;
- (id)nodesContainingNodeIdentifier:(id)a0;
- (unsigned long long)indexOfNodeWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)moveNodes:(id)a0 toContiguousIndicesStartingAt:(unsigned long long)a1;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (id)indexDescriptionWithPrefix:(id)a0;
- (id)indexesOfNodesPassingTest:(id /* block */)a0;
- (unsigned long long)indexOfNode:(id)a0;
- (void)insertNodes:(id)a0 atIndexes:(id)a1;
- (void)dealloc;
- (void)removeLastNode;
- (unsigned long long)indexOfNodePassingTest:(id /* block */)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (id)nodesAtIndexes:(id)a0;

@end

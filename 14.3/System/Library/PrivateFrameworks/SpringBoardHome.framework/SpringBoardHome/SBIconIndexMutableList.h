@class NSString, NSMutableArray, NSMapTable;
@protocol SBIconIndexNode, SBIconIndexMutableListObserver;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration> {
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

- (void)removeNode:(id)a0;
- (void)enumerateNodesAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)sortUsingComparator:(id /* block */)a0;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (id)init;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)removeNodesInArray:(id)a0;
- (unsigned long long)indexOfNode:(id)a0;
- (void)removeNodeAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfNodeWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)dealloc;
- (id)nodesAlongIndexPath:(id)a0 consumedIndexes:(unsigned long long)a1;
- (void)enumerateNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)nodesContainingNodeIdentifier:(id)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (unsigned long long)indexOfNodeAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)nodes;
- (unsigned long long)indexOfNodePassingTest:(id /* block */)a0;
- (id)indexesOfNodesPassingTest:(id /* block */)a0;
- (void)removeLastNode;
- (void)insertNodes:(id)a0 atIndexes:(id)a1;
- (id)indexPathsForContainedNodeIdentifier:(id)a0 prefixPath:(id)a1;
- (BOOL)containsNodeIdentifier:(id)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (id)nodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)count;
- (void)sortUsingSelector:(SEL)a0;
- (void)moveNodes:(id)a0 toContiguousIndicesStartingAt:(unsigned long long)a1;
- (void)moveNode:(id)a0 toIndex:(unsigned long long)a1;
- (id)containedNodeIdentifiers;
- (void)addNode:(id)a0;
- (id)nodesAtIndexes:(id)a0;
- (void)removeNodesAtIndexes:(id)a0;
- (void)removeAllNodes;
- (void)replaceNodeAtIndex:(unsigned long long)a0 withNode:(id)a1;
- (void)removeNodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indexDescriptionWithPrefix:(id)a0;
- (BOOL)containsNode:(id)a0;

@end

@class VMUClassInfoMap;

@interface VMUObjectGraph : VMUDirectedGraph {
    struct _VMUObjectGraphEdge { union { struct { unsigned int x0 : 24; unsigned char x1 : 2; unsigned char x2 : 5; unsigned char x3 : 1; } x0; struct { unsigned int x0 : 31; unsigned char x1 : 1; } x1; } x0; } *_referenceTable;
    unsigned int _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge { unsigned long x0 : 56; unsigned char x1 : 8; unsigned long x2 : 56; unsigned char x3 : 8; } *_referenceTableLarge;
    unsigned int _referenceTableLargeCount;
    unsigned int _referenceTableLargeCapacity;
    struct _VMUBlockNode { unsigned long long x0; unsigned char x1 : 3; unsigned char x2 : 2; unsigned long x3 : 36; unsigned int x4 : 23; } *_internalizedNodes;
    unsigned int _internalizedCount;
    id *_classInfos;
    unsigned int _classInfosCount;
    id /* block */ _nodeProvider;
    VMUObjectGraph *_referenceGraph;
    unsigned int _referenceGraphNodeNamespaceSize;
    unsigned int _referenceGraphEdgeNamespaceSize;
    int _referencingCount;
}

@property (retain, nonatomic) VMUClassInfoMap *indexedClassInfos;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned int)nodeForAddress:(unsigned long long)a0;
- (unsigned int)addEdgeFromNode:(unsigned int)a0 sourceOffset:(unsigned long long)a1 withScanType:(unsigned int)a2 toNode:(unsigned int)a3 destinationOffset:(unsigned long long)a4;
- (struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })nodeDetails:(unsigned int)a0;
- (unsigned int)enumerateMarkedObjects:(void *)a0 withBlock:(id /* block */)a1;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)a0;
- (void)stronglyConnectedComponentSearch:(unsigned int)a0 withRecorder:(id /* block */)a1;
- (BOOL)isRootNode:(unsigned int)a0;
- (BOOL)isGroupNode:(unsigned int)a0;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)initWithNodesNoCopy:(struct _VMUBlockNode { unsigned long long x0; unsigned char x1 : 3; unsigned char x2 : 2; unsigned long x3 : 36; unsigned int x4 : 23; } *)a0 nodeCount:(unsigned int)a1;
- (id)initWithArchived:(id)a0 version:(long long)a1 options:(unsigned long long)a2 diskLogs:(id)a3 error:(id *)a4;
- (void)archiveDictionaryRepresentation:(id)a0 options:(unsigned long long)a1;
- (void)internalizeNodes;
- (void)_renameWithNodeMap:(unsigned int *)a0 nodeNamespace:(unsigned int)a1 edgeMap:(unsigned int *)a2 edgeNamespace:(unsigned int)a3;
- (void)_refineTypesWithOverlay:(id)a0;
- (struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })_rawReferenceInfoWithName:(unsigned int)a0;
- (unsigned int)scanTypeOfReferenceWithName:(unsigned int)a0;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)a0;
- (unsigned int)addEdgeFromNode:(unsigned int)a0 toNode:(unsigned int)a1;
- (void)_modifyDerivativeGraphCount:(int)a0;
- (void *)_compareWithGraph:(id)a0 andMarkOnMatch:(BOOL)a1;
- (id)initWithNodeCount:(unsigned int)a0 nodeProvider:(id /* block */)a1;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (unsigned int)nodeReferencedFromSourceNode:(unsigned int)a0 byIvarWithName:(id)a1;
- (unsigned int)enumerateObjectsContainedInCollection:(unsigned int)a0 withBlock:(id /* block */)a1;
- (struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })referenceInfoWithName:(unsigned int)a0;
- (void *)createMapForMinusGraph:(id)a0;
- (void *)createMapForIntersectGraph:(id)a0;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)a0 toNodes:(void *)a1;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)a0 toNodes:(void *)a1;

@end

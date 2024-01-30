@class VMUCallTreeRoot, NSNumber, VMUClassPatternMatcher, VMUDebugTimer, VMUDominatorGraph, VMUProcessObjectGraph;

@interface VMUDominatorCallTreeCreator : NSObject {
    VMUDebugTimer *_debugTimer;
    void *_visitedNodes;
    BOOL _showRegionVirtualSize;
    BOOL _groupByType;
}

@property (retain) VMUProcessObjectGraph *processObjectGraph;
@property (retain) VMUDominatorGraph *dominatorGraph;
@property (retain) VMUCallTreeRoot *callTreeRoot;
@property (retain) NSNumber *desiredAddress;
@property (retain) VMUClassPatternMatcher *desiredClassesPattern;

- (void).cxx_destruct;
- (id)callTreeWithGraph:(id)a0 groupByType:(BOOL)a1 showRegionVirtualSize:(BOOL)a2 debugTimer:(id)a3;
- (void *)removeJunkNodes;
- (void)buildCallTreeWithRootNodeNames:(id)a0;
- (id)groupByNodeNameForNode:(unsigned int)a0 parentNodeName:(unsigned int)a1 parentNodeType:(unsigned int)a2 reference:(const struct { struct *x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct *x2; } *)a3;
- (void)removeJunkEdges;
- (id)_addNodeWithNodeName:(unsigned int)a0 nodeInfo:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a1 callTreeParentNode:(id)a2 parentNodeName:(unsigned int)a3 parentNodeType:(unsigned int)a4 reference:(struct { struct *x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct *x2; } *)a5;
- (void)buildCallTreeWithNodeName:(unsigned int)a0 callTreeParentNode:(id)a1 parentNodeName:(unsigned int)a2 parentNodeType:(unsigned int)a3 reference:(struct { struct *x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct *x2; } *)a4 rootNodeFilter:(id /* block */)a5;
- (id)groupByTypeNameForNode:(unsigned int)a0;
- (id)referenceDecriptionForSourceNodeAddress:(unsigned long long)a0 referenceInfo:(struct { unsigned long long x0; unsigned int x1; unsigned long long x2; })a1;
- (id)remainingNodeNames;
- (unsigned long long)sizeForNodeName:(unsigned int)a0 nodeInfo:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a1;

@end

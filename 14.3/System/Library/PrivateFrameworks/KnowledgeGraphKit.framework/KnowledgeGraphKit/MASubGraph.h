@class NSMutableDictionary, MABaseGraph;

@interface MASubGraph : NSObject {
    NSMutableDictionary *_nodesByIdentifier;
    NSMutableDictionary *_nodesByLabel;
    NSMutableDictionary *_nodesByName;
    NSMutableDictionary *_edgesByIdentifier;
    NSMutableDictionary *_edgesByLabel;
    NSMutableDictionary *_edgesByName;
    NSMutableDictionary *_nodesByNameGroupByNodes;
}

@property (readonly, nonatomic) MABaseGraph *graph;

+ (id)subGraphWithGraph:(id)a0;
+ (id)subGraphIntersectionsWithSubGraphs:(id)a0;

- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (void)enumerateEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (id)nodeForIdentifier:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allNodes;
- (id)nodesLabels;
- (id)nodesForLabel:(id)a0;
- (unsigned long long)nodesCountForLabel:(id)a0;
- (id)description;
- (unsigned long long)edgesCountForLabel:(id)a0;
- (id)edgesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)edgeForIdentifier:(unsigned int)a0;
- (unsigned long long)edgesCount;
- (id)objectForKeyedSubscript:(id)a0;
- (id)allEdges;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (void)enumerateNodesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)nodesCount;
- (id)edgesForLabel:(id)a0;
- (id)nodesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)edgesLabels;
- (id)nodesForName:(id)a0;
- (id)nodesForName:(id)a0 fromNode:(id)a1;
- (id)edgesForName:(id)a0;
- (id)edgesNames;
- (id)nodesNames;
- (void)enumerateNodesWithName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesWithName:(id)a0 fromNode:(id)a1 usingBlock:(id /* block */)a2;
- (id)allNamedNodes;
- (id)graphRepresentation;
- (void)mergeWithSubGraph:(id)a0;
- (void)addNodes:(id)a0 withName:(id)a1;
- (void)_addNode:(id)a0 withName:(id)a1;
- (void)_addNode:(id)a0 withName:(id)a1 forKeyNode:(id)a2;
- (id)nodesForNames:(id)a0;
- (unsigned long long)nodesCountForName:(id)a0;
- (unsigned long long)nodesCountForName:(id)a0 fromNode:(id)a1;
- (void)enumerateNodesByNameUsingBlock:(id /* block */)a0;
- (void)addEdges:(id)a0 withName:(id)a1;
- (void)_addEdge:(id)a0 withName:(id)a1;
- (unsigned long long)edgesCountForName:(id)a0;
- (id)allNamedEdges;
- (void)enumerateEdgesByNameUsingBlock:(id /* block */)a0;
- (void)enumerateEdgesWithName:(id)a0 usingBlock:(id /* block */)a1;

@end

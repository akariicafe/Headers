@class NSMapTable;
@protocol CLSGraphVertex, NSObject;

@interface CLSGraph : NSObject {
    NSMapTable *_verticesMap;
    NSMapTable *_inEdgesMap;
    NSMapTable *_outEdgesMap;
    unsigned long long _options;
}

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) id<CLSGraphVertex, NSObject> anyVertex;

- (void)enumerate:(id /* block */)a0;
- (id)init;
- (void)reset;
- (void)addVertex:(id)a0;
- (void).cxx_destruct;
- (void)removeVertex:(id)a0;
- (void)addEdgeFromVertex:(id)a0 toVertex:(id)a1;
- (BOOL)containsVertex:(id)a0;
- (unsigned long long)degree:(id)a0;
- (unsigned long long)_degreeOfVertex:(id)a0 inEdgeMap:(id)a1;
- (void)_enumerateVerticesInEdges:(id)a0 skipingEdges:(id)a1 enumerationBlock:(id /* block */)a2;
- (void)_removeEdgeFromVertexWithID:(id)a0 toVertexWithID:(id)a1;
- (void)_traverseStartingAtVertex:(id)a0 previousVertex:(id)a1 visitedVertices:(id)a2 enumerationBlock:(id /* block */)a3;
- (BOOL)containsVertexWithVertexID:(id)a0;
- (void)enumerateInNeighboursOfVertex:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)enumerateNeighboursOfVertex:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)enumerateOutNeighboursOfVertex:(id)a0 enumerationBlock:(id /* block */)a1;
- (BOOL)hasEdgeFromVertex:(id)a0 toVertex:(id)a1;
- (unsigned long long)inDegree:(id)a0;
- (id)inNeighboursOfVertex:(id)a0;
- (id)initWithMemoryOptions:(unsigned long long)a0;
- (id)neighboursOfVertex:(id)a0;
- (unsigned long long)outDegree:(id)a0;
- (id)outNeighboursOfVertex:(id)a0;
- (void)removeEdgeFromVertex:(id)a0 toVertex:(id)a1;
- (void)removeSubtreeStartingAtVertex:(id)a0;
- (void)traverse:(id /* block */)a0;
- (void)traverseStartingAtVertex:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)traverseVerticesPassingTest:(id /* block */)a0 enumerationBlock:(id /* block */)a1;
- (id)vertexWithVertexID:(id)a0;

@end

@interface __NSSKGraph : NSObject {
    struct edge { unsigned long long x0; unsigned long long x1[2]; unsigned long long x2; } *_edges;
    struct vertex { unsigned long long x0; unsigned long long x1; unsigned long long *x2; } *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

- (BOOL)isEmpty;
- (struct edge **)isAcyclic;
- (void)dealloc;
- (unsigned long long)numOfEdges;
- (id)initWithNumberOfVertices:(long long)a0 numberOfEdges:(long long)a1;
- (BOOL)addEdgeWithH1:(unsigned long long)a0 withH2:(unsigned long long)a1;

@end

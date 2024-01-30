@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)a0;

- (id)targetNode;
- (void)setEdges:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)nodesForLabel:(id)a0;
- (id)description;
- (id)nodeAtIndex:(unsigned long long)a0;
- (unsigned long long)edgesCount;
- (id)sourceNode;
- (BOOL)isEqualToPath:(id)a0;
- (unsigned long long)nodesCount;
- (id)edgeAtIndex:(unsigned long long)a0;
- (id)edgesForLabel:(id)a0;
- (BOOL)containsNode:(id)a0;
- (double)edgesWeight;
- (BOOL)containsEdge:(id)a0;
- (void)addFirstEdge:(id)a0;
- (void)addLastEdge:(id)a0;
- (void)removeFirstEdge;
- (void)removeLastEdge;
- (void)removeAllEdges;
- (id)graphRepresentation;

@end

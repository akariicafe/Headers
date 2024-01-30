@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)a0;

- (void)enumerateWithBlock:(id /* block */)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (id)sourceNode;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)nodesForLabel:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsNode:(id)a0;
- (id)targetNode;
- (void)setEdges:(id)a0;
- (id)edgesForLabel:(id)a0;
- (BOOL)isEqualToPath:(id)a0;
- (unsigned long long)nodesCount;
- (unsigned long long)edgesCount;
- (BOOL)containsEdge:(id)a0;
- (id)edgeAtIndex:(unsigned long long)a0;
- (double)edgesWeight;
- (void)addFirstEdge:(id)a0;
- (void)addLastEdge:(id)a0;
- (void)removeFirstEdge;
- (void)removeLastEdge;
- (void)removeAllEdges;
- (id)graphRepresentation;

@end

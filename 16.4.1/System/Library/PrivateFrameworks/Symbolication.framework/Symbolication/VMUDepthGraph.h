@class VMUProcessObjectGraph;

@interface VMUDepthGraph : NSObject {
    VMUProcessObjectGraph *_graph;
    unsigned int *_depthMap;
}

- (id)initWithGraph:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_buildDepthMap;
- (void)_buildNextDepth:(id)a0 into:(id)a1 depth:(unsigned int)a2;
- (void)_processNodes:(void *)a0 withDepth:(unsigned int)a1;
- (unsigned int)depthOfNode:(unsigned int)a0;
- (long long)markNodes:(void *)a0 atDepth:(unsigned int)a1;

@end

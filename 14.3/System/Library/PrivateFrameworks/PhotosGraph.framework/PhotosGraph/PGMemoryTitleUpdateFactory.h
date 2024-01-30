@class PGGraph, NSSet, PHMemory;

@interface PGMemoryTitleUpdateFactory : NSObject

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSSet *momentNodes;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 graph:(id)a1;
- (id)titleGeneratorWithError:(id *)a0;
- (id)_momentNodesFromMemory:(id)a0;
- (long long)_predominantYearForYearSummaryMemory;
- (id)_predominantNeighborNodeFromMomentNodes:(id)a0 withLabel:(id)a1 domain:(unsigned short)a2;
- (id)_predominantNeighborNodeFromMomentNodes:(id)a0 withLabel:(id)a1 domain:(unsigned short)a2 ignoredNodes:(id)a3;
- (id)_personNodeForPersonMemory;
- (id)_areaNodeForAreaMemory;
- (id)_predominantSuperset;

@end

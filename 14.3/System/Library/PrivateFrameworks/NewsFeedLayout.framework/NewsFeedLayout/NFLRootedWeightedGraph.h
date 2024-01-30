@class NSMutableDictionary, NSMutableSet, FCSetValueMapTable;

@interface NFLRootedWeightedGraph : NSObject <NSCopying>

@property (retain, nonatomic) id rootNode;
@property (retain, nonatomic) FCSetValueMapTable *parentToChildren;
@property (retain, nonatomic) FCSetValueMapTable *childToParents;
@property (retain, nonatomic) NSMutableSet *childlessNodes;
@property (retain, nonatomic) NSMutableSet *parentlessNodes;
@property (retain, nonatomic) NSMutableDictionary *weightsByEdge;

- (void)removeNode:(id)a0;
- (void)debug_assertDataStructuresInSync;
- (double)weightForEdgeFromNode:(id)a0 toNode:(id)a1;
- (id)init;
- (void)addDirectedEdgeWithWeight:(double)a0 fromNode:(id)a1 toNode:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)parentsOfNode:(id)a0;
- (void)removeParentlessNodesExhaustivelyButRootNode;
- (id)highestAverageWeightedPathsFromRootToNode:(id)a0 pathWeight:(double *)a1;
- (void)removeChildlessNodesExhaustivelyButNode:(id)a0;
- (void)_setWeight:(double)a0 forEdgeFromNode:(id)a1 toNode:(id)a2;
- (id)description;
- (id)childrenOfNode:(id)a0;
- (void)removeEdgeFromNode:(id)a0 toNode:(id)a1;
- (id)initWithRootNode:(id)a0;
- (void)_submitMaxPath:(id)a0 withWeight:(double)a1 toNode:(id)a2 maxPathStore:(id)a3;
- (id)_edgeRepresentationFromNode:(id)a0 toNode:(id)a1;
- (BOOL)containsNode:(id)a0;

@end

@interface AXVisualElementGrouper : AXElementGrouper

@property (nonatomic) double maximumNeighbourDistance;
@property (nonatomic) double maximumDistanceForAligningEdges;

- (id)_groupablesForItems:(id)a0;
- (id)initWithHeuristics:(long long)a0;

@end

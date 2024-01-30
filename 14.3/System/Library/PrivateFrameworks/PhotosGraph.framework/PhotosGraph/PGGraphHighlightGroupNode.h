@class NSArray, PGGraphHighlightTypeNode;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphHighlightTypeNode *typeNode;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)pathToMoment;
+ (id)pathFromMoment;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)pathFromTargetNodeDomain:(unsigned short)a0;
+ (id)pathToTargetNodeDomain:(unsigned short)a0;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)a0 withName:(id)a1;

- (id)momentNodes;
- (BOOL)isLongTrip;
- (BOOL)isAggregation;
- (BOOL)isTrip;
- (BOOL)isPartOfTrip;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (void)eventEnumerateMomentNodesUsingBlock:(id /* block */)a0;
- (BOOL)isShortTrip;
- (BOOL)isPartOfAggregation;
- (BOOL)isPartOfLongTrip;
- (id)label;
- (BOOL)isPartOfShortTrip;

@end

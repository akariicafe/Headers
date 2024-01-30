@class PGGraphHighlightGroupNodeCollection, NSArray, MARelation;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (class, readonly) MARelation *highlightOfHighlightGroup;
@property (class, readonly) MARelation *typeOfHighlightGroup;

@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *collection;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)filter;
+ (id)filterWithUUIDs:(id)a0;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)momentInHighlight;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)a0;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)a0;

- (unsigned long long)featureType;
- (id)label;
- (BOOL)isAggregation;
- (void)enumerateHighlightEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (BOOL)isLongTrip;
- (BOOL)isPartOfAggregation;
- (BOOL)isPartOfLongTrip;
- (BOOL)isPartOfShortTrip;
- (BOOL)isPartOfTrip;
- (BOOL)isShortTrip;
- (BOOL)isTrip;

@end

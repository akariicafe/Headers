@class PGGraphHighlightGroupNodeCollection, NSArray, MARelation;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (class, readonly) MARelation *highlightOfHighlightGroup;
@property (class, readonly) MARelation *typeOfHighlightGroup;

@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *collection;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)filter;
+ (id)pathFromMoment;
+ (id)pathToMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)a0;
+ (id)pathToTargetNodeDomain:(unsigned short)a0;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)filterWithUUIDs:(id)a0;
+ (id)momentInHighlight;

- (BOOL)isTrip;
- (id)label;
- (unsigned long long)featureType;
- (BOOL)isAggregation;
- (BOOL)isLongTrip;
- (BOOL)isShortTrip;
- (BOOL)isPartOfTrip;
- (BOOL)isPartOfLongTrip;
- (BOOL)isPartOfShortTrip;
- (BOOL)isPartOfAggregation;
- (void)enumerateHighlightEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;

@end

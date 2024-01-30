@class MAEdgeFilter;

@interface PGGraphLocationEdge : PGGraphPropertylessEdge <MAUniquelyIdentifiableEdge>

@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

@end

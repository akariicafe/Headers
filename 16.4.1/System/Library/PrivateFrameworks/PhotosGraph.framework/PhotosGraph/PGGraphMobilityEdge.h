@class MAEdgeFilter;

@interface PGGraphMobilityEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge>

@property (readonly) double confidence;
@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toMobilityNode:(id)a1 confidence:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end

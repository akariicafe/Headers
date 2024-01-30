@interface PGGraphPOIEdge : PGGraphOptimizedEdge

@property (nonatomic) float weight;
@property (nonatomic) unsigned char poiIsImproved : 1;
@property (readonly, nonatomic) unsigned char poiIsSpecial : 1;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)initFromMomentNode:(id)a0 toPOINode:(id)a1 weight:(float)a2;
- (id)label;

@end

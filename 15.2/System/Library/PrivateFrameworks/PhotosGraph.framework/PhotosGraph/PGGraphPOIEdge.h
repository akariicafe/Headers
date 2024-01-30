@class MAEdgeFilter;

@interface PGGraphPOIEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (class, readonly) MAEdgeFilter *filterImproved;
@property (class, readonly) MAEdgeFilter *filterSpecial;

@property (readonly, nonatomic) unsigned char poiIsImproved : 1;
@property (readonly, nonatomic) unsigned char poiIsSpecial : 1;

+ (id)filter;
+ (id)propertiesWithPOIIsImproved:(BOOL)a0;

- (float)weight;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPOINode:(id)a1 weight:(float)a2 poiIsImproved:(BOOL)a3 poiIsSpecial:(BOOL)a4;

@end

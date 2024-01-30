@class MAEdgeFilter;

@interface PGGraphPOIEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *filterImproved;
@property (class, readonly) MAEdgeFilter *filterSpecial;

@property (readonly) double confidence;
@property (readonly, nonatomic) unsigned char poiIsImproved : 1;
@property (readonly, nonatomic) unsigned char poiIsSpecial : 1;

+ (id)filter;
+ (id)filterAboveConfidence:(double)a0;
+ (void)setConfidence:(double)a0 onPOIEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setPOIIsImproved:(BOOL)a0 onPOIEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPOINode:(id)a1 confidence:(double)a2 poiIsImproved:(BOOL)a3 poiIsSpecial:(BOOL)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end

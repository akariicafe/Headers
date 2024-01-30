@interface PGGraphAnniversaryEventEdge : PGGraphOptimizedEdge

@property (readonly) double confidence;

+ (id)filter;
+ (void)setConfidence:(double)a0 onAnniversaryEventEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPersonNode:(id)a1 confidence:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end

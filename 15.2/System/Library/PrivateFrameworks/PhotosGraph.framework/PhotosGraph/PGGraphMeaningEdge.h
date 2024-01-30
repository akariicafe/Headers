@class MAEdgeFilter, NSString;

@interface PGGraphMeaningEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *reliableFilter;

@property (readonly) double confidence;
@property (readonly) BOOL isReliable;
@property (readonly) NSString *meaningLabel;

+ (id)filter;
+ (id)propertyDictionaryWithConfidence:(double)a0;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (id)initFromMomentNode:(id)a0 toMeaningNode:(id)a1 confidence:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;

@end

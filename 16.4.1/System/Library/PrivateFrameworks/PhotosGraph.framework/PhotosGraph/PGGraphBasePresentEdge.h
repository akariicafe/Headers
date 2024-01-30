@class MAEdgeFilter;

@interface PGGraphBasePresentEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *consolidatedFilter;
@property (class, readonly) MAEdgeFilter *consolidatedPresentInAssetsFilter;

@property (readonly) double importance;
@property (readonly, nonatomic) unsigned int numberOfAssets : 32;

+ (id)filter;
+ (void)setImportance:(double)a0 onPresentEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setNumberOfAssets:(unsigned long long)a0 onPresentEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromPersonNode:(id)a0 toMomentNode:(id)a1 importance:(double)a2 numberOfAssets:(unsigned long long)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end

@interface PGGraphPresentEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (readonly, nonatomic) unsigned int numberOfAssets : 32;

+ (id)filter;
+ (id)consolidatedFilter;

- (float)weight;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromPersonNode:(id)a0 toMomentNode:(id)a1 weight:(float)a2 numberOfAssets:(unsigned long long)a3;

@end

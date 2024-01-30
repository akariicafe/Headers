@interface PGGraphPresentEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (readonly, nonatomic) unsigned int numberOfAssets : 32;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (id)initFromPersonNode:(id)a0 toMomentNode:(id)a1 weight:(float)a2;
- (unsigned short)domain;
- (id)label;
- (float)weight;

@end

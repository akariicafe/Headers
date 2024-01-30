@interface PGGraphSceneEdge : PGGraphOptimizedEdge

@property (nonatomic) float weight;
@property (readonly, nonatomic) unsigned char isReliable : 1;
@property (readonly, nonatomic) BOOL isSearchableForEvent;
@property (readonly, nonatomic) unsigned int numberOfAssets : 32;
@property (readonly, nonatomic) unsigned int numberOfHighConfidenceAssets : 32;
@property (readonly, nonatomic) unsigned int numberOfSearchConfidenceAssets : 32;

+ (id)filter;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)initFromMomentNode:(id)a0 toSceneNode:(id)a1 weight:(float)a2;
- (id)label;
- (id)debugDescription;

@end

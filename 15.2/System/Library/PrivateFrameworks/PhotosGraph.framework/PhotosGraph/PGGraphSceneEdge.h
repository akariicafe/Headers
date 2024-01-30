@class MAEdgeFilter;

@interface PGGraphSceneEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (class, readonly, nonatomic) MAEdgeFilter *isReliableFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *highConfidenceAssetsFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *searchConfidenceAssetsFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *dominantSceneAssetsFilter;

@property (readonly, nonatomic) unsigned char isReliable : 1;
@property (readonly, nonatomic) BOOL isSearchableForEvent;
@property (readonly, nonatomic) unsigned int numberOfAssets : 32;
@property (readonly, nonatomic) unsigned int numberOfHighConfidenceAssets : 32;
@property (readonly, nonatomic) unsigned int numberOfSearchConfidenceAssets : 32;
@property (readonly, nonatomic) unsigned int numberOfDominantSceneAssets : 32;

+ (id)filter;

- (float)weight;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (id)debugDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toSceneNode:(id)a1 weight:(float)a2 isReliable:(BOOL)a3 numberOfAssets:(unsigned long long)a4 numberOfHighConfidenceAssets:(unsigned long long)a5 numberOfSearchConfidenceAssets:(unsigned long long)a6 numberOfDominantSceneAssets:(unsigned long long)a7;

@end

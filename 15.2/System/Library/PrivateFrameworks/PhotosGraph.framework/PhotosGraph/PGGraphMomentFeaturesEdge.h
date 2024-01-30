@class NSString;

@interface PGGraphMomentFeaturesEdge : PGGraphOptimizedEdge {
    NSString *_allAssetUUIDs;
    unsigned int _numberOfRelevantAssets : 32;
}

+ (id)filter;
+ (id)relevantAssetUUIDsFromAllAssetUUIDs:(id)a0;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 allAssetUUIDs:(id)a3;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 relevantAssetUUIDs:(id)a3;

@end

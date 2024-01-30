@class NSString;

@interface PGGraphMomentFeaturesEdge : PGGraphOptimizedEdge {
    NSString *_allAssetUUIDs;
    unsigned int _numberOfRelevantAssets : 32;
}

+ (id)filter;
+ (id)relevantAssetUUIDsFromAllAssetUUIDs:(id)a0;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 allAssetUUIDs:(id)a3;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 relevantAssetUUIDs:(id)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end

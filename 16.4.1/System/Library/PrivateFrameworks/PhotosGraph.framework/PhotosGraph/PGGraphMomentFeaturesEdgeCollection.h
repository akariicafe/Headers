@class NSSet;

@interface PGGraphMomentFeaturesEdgeCollection : PGGraphEdgeCollection

@property (readonly) unsigned long long numberOfRelevantAssets;
@property (readonly, nonatomic) NSSet *allRelevantAssetUUIDs;
@property (readonly, nonatomic) NSSet *allRelevantAssetLocalIdentifiers;

+ (Class)edgeClass;
+ (id)momentFeaturesEdgesFromMomentNodes:(id)a0 toFeatureNodes:(id)a1;

@end

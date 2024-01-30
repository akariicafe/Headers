@class MARelation, NSString, NSArray, PGGraphSceneNodeCollection;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_localizedSynonyms;
    NSString *_label;
}

@property (class, readonly) MARelation *momentOfScene;
@property (class, readonly) MARelation *momentOfReliableScene;
@property (class, readonly) MARelation *momentOfSceneWithHighConfidenceAssets;

@property (readonly, nonatomic) NSString *sceneName;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) unsigned char level : 8;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL isSuitableForSuggestions;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property (readonly, nonatomic) unsigned long long numberOfSearchConfidenceAssets;
@property (readonly, nonatomic) unsigned long long numberOfDominantSceneAssets;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)filterForSceneName:(id)a0;
+ (id)filterForSceneNames:(id)a0;
+ (id)filterWithSceneIdentifiers:(id)a0;
+ (id)momentOfSceneWithDominantSceneAssets;
+ (id)momentOfSceneWithSearchConfidenceAssets;
+ (id)suggestableSceneNames;

- (unsigned short)domain;
- (id)momentNodes;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initForTestingWithSceneName:(id)a0;
- (id)initWithSceneName:(id)a0 sceneIdentifier:(unsigned int)a1 level:(unsigned long long)a2 isIndexed:(BOOL)a3 localizedName:(id)a4 localizedSynonyms:(id)a5;
- (id)initWithSceneTaxonomyNode:(id)a0 level:(unsigned long long)a1;

@end

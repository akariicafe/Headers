@class MARelation, NSString, PFSceneTaxonomyNode, NSArray, PGGraphSceneNodeCollection;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly) MARelation *momentOfScene;
@property (class, readonly) MARelation *momentOfReliableScene;
@property (class, readonly) MARelation *momentOfSceneWithHighConfidenceAssets;

@property (readonly, nonatomic) PFSceneTaxonomyNode *sceneTaxonomyNode;
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
+ (id)suggestionWhitelistedScenes;
+ (id)filterForSceneNames:(id)a0;
+ (id)filterForSceneName:(id)a0;
+ (id)momentOfSceneWithDominantSceneAssets;
+ (id)momentOfSceneWithSearchConfidenceAssets;
+ (BOOL)isSceneSuitableForSuggestionsWithLabel:(id)a0;
+ (BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)a0 confidence:(double)a1;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)momentNodes;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 level:(unsigned long long)a1;
- (id)initWithSceneName:(id)a0 level:(unsigned long long)a1;

@end

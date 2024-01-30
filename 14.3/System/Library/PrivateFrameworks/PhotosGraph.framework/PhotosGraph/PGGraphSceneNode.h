@class NSString, NSArray, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {
    unsigned char level : 8;
    NSString *_label;
}

@property (readonly, nonatomic) PVSceneTaxonomyNode *sceneTaxonomyNode;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL isSuitableForSuggestions;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)filter;
+ (id)suggestionWhitelistedScenes;
+ (BOOL)isSceneSuitableForSuggestionsWithLabel:(id)a0;
+ (BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)a0 confidence:(double)a1;

- (id)momentNodes;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end

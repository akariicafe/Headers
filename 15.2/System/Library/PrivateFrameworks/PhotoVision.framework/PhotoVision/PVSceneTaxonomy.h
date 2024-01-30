@class PFSceneTaxonomy, NSString, PVSceneTaxonomyNode;

@interface PVSceneTaxonomy : NSObject

@property (retain) PFSceneTaxonomy *taxonomy;
@property (readonly) PVSceneTaxonomyNode *rootNode;
@property (readonly, copy) NSString *sha256Hash;

+ (id)sharedTaxonomy;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)nodeForName:(id)a0;
- (id)nodeForSceneClassId:(unsigned int)a0;
- (id)initWithGraphURL:(id)a0 localizationBundle:(id)a1 tableName:(id)a2;

@end

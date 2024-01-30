@class NSBundle, NSString, NSURL, NSMapTable, PVSceneTaxonomyNode;

@interface PVSceneTaxonomy : NSObject

@property (copy) NSURL *graphURL;
@property (retain) NSBundle *localizationBundle;
@property (copy) NSString *tableName;
@property (retain) NSMapTable *sceneClassIndex;
@property (retain) NSMapTable *nameIndex;
@property (readonly) PVSceneTaxonomyNode *rootNode;
@property (readonly, copy) NSString *sha256Hash;

+ (id)sharedTaxonomy;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nodeForSceneClassId:(unsigned int)a0;
- (id)description;
- (id)nodeForName:(id)a0;
- (id)initWithGraphURL:(id)a0 localizationBundle:(id)a1 tableName:(id)a2;
- (void)putNodeInIndex:(id)a0;
- (id)buildNodesFromGraphURL:(id)a0 sha256Hash:(id *)a1;

@end

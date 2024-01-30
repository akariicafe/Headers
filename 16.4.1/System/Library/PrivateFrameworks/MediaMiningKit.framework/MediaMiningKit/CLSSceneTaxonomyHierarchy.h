@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
}

- (id)nodeForIdentifier:(unsigned int)a0;
- (id)nodeForName:(id)a0;
- (id)init;
- (id)rootNode;
- (BOOL)nodeExistsForName:(id)a0;
- (void).cxx_destruct;

@end

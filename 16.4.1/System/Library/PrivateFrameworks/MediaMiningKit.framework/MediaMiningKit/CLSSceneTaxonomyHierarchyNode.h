@class NSString, NSSet, PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchyNode : NSObject {
    void *_taxonomyNodeRef;
    PFSceneTaxonomy *_sceneTaxonomy;
}

@property (readonly) NSString *name;
@property (readonly) unsigned int identifier;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *localizedSynonyms;
@property (readonly) BOOL isIndexed;

- (void).cxx_destruct;
- (void)traverseChildrenUsingNameBlock:(id /* block */)a0;
- (void)visitChildrenUsingNameBlock:(id /* block */)a0;
- (void)visitParentsUsingNameBlock:(id /* block */)a0;
- (id)initWithSceneTaxonomyNodeRef:(void *)a0 inSceneTaxonomy:(id)a1;

@end

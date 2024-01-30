@class PFSceneTaxonomy, NSMutableDictionary;

@interface CLSInvestigationHelper : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    NSMutableDictionary *_parentTaxonomyNodesBySceneIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _parentTaxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodeBySceneIdentifier;
    NSMutableDictionary *_sceneNameBySceneIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesAndSceneNamesLock;
    NSMutableDictionary *_taxonomyNodesLevelsAndWeightsBySceneIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesLevelsAndWeightsLock;
    NSMutableDictionary *_maxTaxonomyNodeLevelBySceneIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (id)_loadNodeAndNameForSceneIdentifier:(unsigned int)a0 name:(id *)a1;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)a0;
- (id)sceneNameForSceneIdentifier:(unsigned int)a0;
- (id)parentNodesOfTaxonomyNode:(id)a0;
- (void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)_maxLevelWithTaxonomyNode:(id)a0;

@end

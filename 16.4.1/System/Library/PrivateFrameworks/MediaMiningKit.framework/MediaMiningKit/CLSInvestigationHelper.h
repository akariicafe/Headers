@class NSMutableDictionary;

@interface CLSInvestigationHelper : NSObject {
    NSMutableDictionary *_parentTaxonomyNodesBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _parentTaxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodeBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodesLevelsAndWeightsBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taxonomyNodesLevelsAndWeightsLock;
    NSMutableDictionary *_maxTaxonomyNodeLevelBySceneIdentifierBySceneModelIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_maxLevelWithTaxonomyNode:(id)a0;
- (void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)a0 usingBlock:(id /* block */)a1;
- (id)parentNodesOfTaxonomyNode:(id)a0;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)a0 sceneModel:(id)a1;

@end

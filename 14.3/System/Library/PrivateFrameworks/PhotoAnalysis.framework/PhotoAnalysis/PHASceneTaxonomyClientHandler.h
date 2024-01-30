@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>

+ (void)initialize;

- (id)sceneTaxonomyHash;
- (void)handleOperation:(id)a0;
- (void)sceneNodesForSceneIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)searchResultNodesForSceneIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)localizedLabelForSceneIdentifier:(unsigned int)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)searchResultNodesForSceneClassifications:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end

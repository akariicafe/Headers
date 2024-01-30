@class NSString;

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleOperation:(id)a0;
- (void)sceneNodesForSceneIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)sceneTaxonomyHash;
- (void)localizedLabelForSceneIdentifier:(unsigned int)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)searchResultNodesForSceneClassifications:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)searchResultNodesForSceneIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end

@class PGGraphMomentNodeCollection, NSSet, PGGraphFeatureNodeCollection, NSString, PGGraphHighlightGroupNodeCollection;

@interface PGGraphHighlightNodeCollection : PGGraphNodeCollection <PGGraphEventCollection, PGGraphScenedEventCollection, PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithPrivateAssets;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithSharedAssets;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithBothPrivateAndSharedAssets;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)highlightNodesForUUIDs:(id)a0 inGraph:(id)a1;
+ (id)dayHighlightNodesInGraph:(id)a0;
+ (id)highlightNodeAsCollectionByHighlightUUIDForArrayOfHighlightUUIDs:(id)a0 inGraph:(id)a1;
+ (id)highlightNodeAsCollectionByHighlightUUIDForHighlightUUIDs:(id)a0 inGraph:(id)a1;
+ (id)highlightNodeForUUID:(id)a0 inGraph:(id)a1;
+ (id)highlightNodesForArrayOfUUIDs:(id)a0 inGraph:(id)a1;

- (void)enumerateUUIDs:(id /* block */)a0;
- (id)eventMomentNodes;
- (id)highConfidenceSceneNodes;
- (id)highlightNodeAsCollectionByHighlightUUID;
- (id)highlightNodeByHighlightUUID;
- (id)sceneNodes;
- (id)searchConfidenceSceneNodes;

@end

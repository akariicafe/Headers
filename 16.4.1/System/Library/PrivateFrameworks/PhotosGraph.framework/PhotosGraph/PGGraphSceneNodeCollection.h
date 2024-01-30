@class PGGraphMomentNodeCollection, NSSet, PGGraphFeatureNodeCollection, NSString;

@interface PGGraphSceneNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesThroughReliableEdges;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithHighConfidenceAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithSearchConfidenceAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithDominantSceneAssets;
@property (readonly) NSSet *sceneNames;
@property (readonly) NSSet *localizedSceneNames;
@property (readonly) NSSet *sceneIdentifiers;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)sceneNodesForSceneName:(id)a0 inGraph:(id)a1;
+ (id)sceneNodesForSceneIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)sceneNodesForSceneNames:(id)a0 inGraph:(id)a1;


@end

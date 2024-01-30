@interface PGSceneUtilities : NSObject

+ (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)a0 forBlocking:(BOOL)a1;
+ (id)confidenceThresholdByDominantSceneIdentifierForSceneNames:(id)a0;
+ (id)_confidenceThresholdBySceneIdentifierForSceneNames:(id)a0 sceneNodeThresholdType:(unsigned long long)a1;
+ (double)_confidenceThresholdForSceneTaxonomyNode:(id)a0 sceneNodeThresholdType:(unsigned long long)a1;

@end

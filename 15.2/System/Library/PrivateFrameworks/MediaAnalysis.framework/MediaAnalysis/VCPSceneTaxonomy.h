@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject {
    PVSceneTaxonomy *_sceneTaxonomy;
}

+ (id)sharedTaxonomy;

- (void).cxx_destruct;
- (id)init;
- (id)sceneNameFromSceneId:(unsigned int)a0;
- (id)sceneIdFromSceneName:(id)a0;

@end

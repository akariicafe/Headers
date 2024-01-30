@class NSString, NSMutableDictionary, PFSceneTaxonomy;

@interface CLSSceneModel : NSObject <CLSClassificationBasedSignalModel> {
    NSMutableDictionary *_signalNodeBySignalName;
    NSMutableDictionary *_signalNodeBySignalIdentifier;
    PFSceneTaxonomy *_sceneTaxonomy;
}

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;
+ (void)dumpThresholdTypesBySceneName;

- (id)initForTesting;
- (id)modelInfo;
- (void).cxx_destruct;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)a0;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (id)sceneIdentifiersFromSceneClassifications:(id)a0 passingThresholdOfType:(unsigned long long)a1;
- (id)sceneNamesFromSceneClassifications:(id)a0 passingThresholdOfType:(unsigned long long)a1;
- (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)a0 withThresholdType:(unsigned long long)a1;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (id)sceneIdentifierBySceneNameForSceneNames:(id)a0;
- (id)sceneIdentifiersForSceneNames:(id)a0 includingChildScenes:(BOOL)a1;
- (void)setupVersion33;
- (void)setupVersion84;
- (const void *)taxonomyNodeRefForSceneIdentifier:(unsigned int)a0;

@end

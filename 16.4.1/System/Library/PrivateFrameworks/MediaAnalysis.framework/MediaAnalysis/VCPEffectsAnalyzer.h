@interface VCPEffectsAnalyzer : NSObject {
    BOOL _hasFaceOrPet;
}

+ (id)getResultIndex:(id)a0;
+ (BOOL)usePHAssetScene;
+ (id)gatingResultKeyToIndex;
+ (id)gatingTypeKeys;
+ (BOOL)isAutoLoopFramworkAvailable;

- (unsigned long long)generateStatsToBeCollectedFrom:(id)a0;
- (int)analyzeAsset:(id)a0 onDemand:(BOOL)a1 cancel:(id /* block */)a2 statsFlags:(unsigned long long *)a3 results:(id *)a4;
- (int)enumerateMatchingScenesOfAsset:(id)a0 forLongExposureUsingBlock:(id /* block */)a1;
- (id)initWithAnalysisResults:(id)a0;
- (id)initWithFlagHasFaceOrPet:(BOOL)a0;
- (id)matchingNodeForSceneClassification:(id)a0 inSceneNames:(id)a1;
- (id)performanSceneClassificationOfImageFileAtURL:(id)a0;
- (void)reportLivePhotoEffectAnalysisResults:(id)a0;

@end

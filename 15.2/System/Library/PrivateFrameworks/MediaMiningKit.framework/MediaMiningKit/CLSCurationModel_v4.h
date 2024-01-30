@class CLSTrendsSceneModel, CLSIVSNSFWModel, CLSMemeModel;

@interface CLSCurationModel_v4 : CLSCurationModel_v3

@property (readonly) CLSMemeModel *memeModel;
@property (readonly) CLSTrendsSceneModel *trendsSceneModel;
@property (readonly) CLSIVSNSFWModel *ivsNSFWModel;

+ (unsigned long long)minimumRequiredSceneAnalysisVersion;

- (void).cxx_destruct;
- (BOOL)isUtilityForSyndicationWithAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithAsset:(id)a0 curationContext:(id)a1;
- (BOOL)isSemDevSceneDetectedForIdentifier:(unsigned int)a0 withSceneClassification:(id)a1;
- (BOOL)isIVSNSFWExplicitWithAsset:(id)a0;
- (BOOL)isMemeWithAsset:(id)a0;
- (id)initWithCurationModelSpecification:(id)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0;
- (id)newProcessedSignals;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (id)faceInformationSummaryWithFaces:(id)a0 detectionTraitsByFaceLocalIdentifier:(id)a1 verifiedPersonUUIDs:(id)a2 hiddenPersonUUIDs:(id)a3 personUUIDByMergeCandidateUUID:(id)a4;
- (BOOL)isUtilityForVideoAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithVideoAsset:(id)a0;
- (BOOL)isUtilityForMemoriesForImageAsset:(id)a0;
- (BOOL)assetIsJunkWithSceneClassifications:(id)a0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)a1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)a2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)a3 forMemories:(BOOL)a4;

@end

@class CLSTrendsSceneModel, CLSIVSNSFWModel, CLSMemeModel;

@interface CLSCurationModel_v4 : CLSCurationModel_v3

@property (readonly) CLSMemeModel *memeModel;
@property (readonly) CLSTrendsSceneModel *trendsSceneModel;
@property (readonly) CLSIVSNSFWModel *ivsNSFWModel;

+ (id)baseSpecificationWithSpecification:(id)a0;

- (void).cxx_destruct;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } *)a1;
- (BOOL)isMemeWithAsset:(id)a0;
- (BOOL)isSemDevSceneDetectedForIdentifier:(unsigned int)a0 withSceneClassification:(id)a1;
- (BOOL)isUtilityForMemoriesWithAsset:(id)a0 curationContext:(id)a1;
- (BOOL)isUtilityForSyndicationWithAsset:(id)a0;
- (BOOL)isVeryPreciselyIVSNSFWExplicitWithAsset:(id)a0;
- (BOOL)assetIsJunkWithSceneClassifications:(id)a0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)a1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)a2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)a3 forMemories:(BOOL)a4;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (id)faceInformationSummaryWithFaces:(id)a0 detectionTraitsByFaceLocalIdentifier:(id)a1 verifiedPersonUUIDs:(id)a2 hiddenPersonUUIDs:(id)a3 personUUIDByMergeCandidateUUID:(id)a4;
- (id)initWithCurationModelSpecification:(id)a0;
- (BOOL)isUtilityForMemoriesForImageAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithVideoAsset:(id)a0;
- (BOOL)isUtilityForVideoAsset:(id)a0;

@end

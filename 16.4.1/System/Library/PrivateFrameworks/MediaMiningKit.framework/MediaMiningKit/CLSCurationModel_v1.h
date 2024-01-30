@class NSDictionary, CLSJunkClassificationModel, CLSFaceModel, CLSMediaPreAnalysisModel, CLSMediaAnalysisModel, CLSSceneModel, CLSAestheticsModel;

@interface CLSCurationModel_v1 : NSObject

@property (readonly) CLSSceneModel *sceneModel;
@property (readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel;
@property (readonly) CLSMediaAnalysisModel *mediaAnalysisModel;
@property (readonly) CLSAestheticsModel *aestheticsModel;
@property (readonly) CLSJunkClassificationModel *junkClassificationModel;
@property (readonly) CLSFaceModel *faceModel;
@property (readonly) double faceSizeUpperLimit;
@property (readonly) double faceSizeLowerLimit;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyChildTeenAdultAndPetScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForUtilityScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForInterestingScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForWhiteboardScenes;
@property (readonly) double minimumDurationForVideoToNotBeJunk;
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk;
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk;

+ (id)baseSpecificationWithSpecification:(id)a0;
+ (short)uninterestingAudioClassifications;

- (id)initForTesting;
- (void).cxx_destruct;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } *)a1;
- (float)interactionScoreWithAsset:(id)a0;
- (BOOL)isAestheticallyPrettyGoodWithAsset:(id)a0;
- (BOOL)isInterestingLivePhotoWithAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithAsset:(id)a0 curationContext:(id)a1;
- (BOOL)isUtilityForSyndicationWithAsset:(id)a0;
- (BOOL)isUtilityWithAsset:(id)a0;
- (double)scoreWithAsset:(id)a0 inContext:(id)a1;
- (BOOL)isInterestingPanoramaWithAsset:(id)a0;
- (BOOL)asset:(id)a0 isAestheticallyAwesomeWithContext:(id)a1;
- (BOOL)assetIsJunkWithSceneClassifications:(id)a0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)a1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)a2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)a3 forMemories:(BOOL)a4;
- (BOOL)avoidIfPossibleForMemoryKeyAssetWithAsset:(id)a0;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (id)faceInformationSummaryWithFaces:(id)a0 detectionTraitsByFaceLocalIdentifier:(id)a1 verifiedPersonUUIDs:(id)a2 hiddenPersonUUIDs:(id)a3 personUUIDByMergeCandidateUUID:(id)a4;
- (BOOL)hasInterestingAudioClassificationWithAsset:(id)a0;
- (BOOL)hasInterestingScenesWithAsset:(id)a0;
- (BOOL)hasPoorResolutionWithAsset:(id)a0;
- (BOOL)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)a0 forKeyAsset:(BOOL)a1 forMemories:(BOOL)a2;
- (BOOL)imageAssetIsJunkFromSceneAndJunkClassifications:(id)a0;
- (id)initWithCurationModelSpecification:(id)a0;
- (short)interestingAudioClassificationsWithAsset:(id)a0;
- (BOOL)isAestheticallyAwesomeWithAsset:(id)a0;
- (BOOL)isBadQualityForImageKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1;
- (BOOL)isBlurryWithAsset:(id)a0;
- (BOOL)isGoldWithAsset:(id)a0;
- (BOOL)isInhabitedWithAsset:(id)a0;
- (BOOL)isInterestingHDRWithAsset:(id)a0;
- (BOOL)isInterestingReframeWithAsset:(id)a0;
- (BOOL)isInterestingSDOFWithAsset:(id)a0;
- (BOOL)isInterestingVideoWithAsset:(id)a0;
- (BOOL)isJunkWithJunkClassification:(id)a0;
- (BOOL)isJunkWithSignal:(id)a0 isReliable:(BOOL *)a1;
- (BOOL)isNonMemorableWithAsset:(id)a0;
- (BOOL)isRegularGemWithAsset:(id)a0;
- (BOOL)isShinyGemWithAsset:(id)a0;
- (BOOL)isTragicFailureWithImageAsset:(id)a0;
- (BOOL)isUtilityForImageAsset:(id)a0;
- (BOOL)isUtilityForMemoriesForImageAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithVideoAsset:(id)a0;
- (BOOL)isUtilityForVideoAsset:(id)a0;
- (id)sceneIdentifiersOfInterestingScenes;

@end

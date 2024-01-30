@class CLSJunkClassificationModel, CLSFaceModel, CLSAestheticsModel, CLSMediaPreAnalysisModel, CLSMediaAnalysisModel, NSString;
@protocol CLSAssetProcessedSignals;

@interface CLSCurationModel_v1 : NSObject <CLSCurationModel> {
    id<CLSAssetProcessedSignals> _defaultProcessedSignals;
}

@property (readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel;
@property (readonly) CLSMediaAnalysisModel *mediaAnalysisModel;
@property (readonly) CLSAestheticsModel *aestheticsModel;
@property (readonly) CLSJunkClassificationModel *junkClassificationModel;
@property (readonly) CLSFaceModel *faceModel;
@property (readonly) double faceSizeUpperLimit;
@property (readonly) double faceSizeLowerLimit;
@property (readonly) double minimumDurationForVideoToNotBeJunk;
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk;
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)minimumRequiredSceneAnalysisVersion;
+ (BOOL)minimumRequiredAnalysisVersionsAreMatchedBySpecification:(id)a0;
+ (BOOL)maximumAllowedAnalysisVersionsAreMatchedBySpecification:(id)a0;
+ (unsigned long long)minimumRequiredMediaAnalysisVersion;
+ (unsigned long long)minimumRequiredFaceAnalysisVersion;
+ (unsigned long long)maximumAllowedSceneAnalysisVersion;
+ (unsigned long long)maximumAllowedMediaAnalysisVersion;
+ (unsigned long long)maximumAllowedFaceAnalysisVersion;
+ (short)uninterestingAudioClassifications;

- (void).cxx_destruct;
- (float)interactionScoreWithAsset:(id)a0;
- (BOOL)isUtilityForSyndicationWithAsset:(id)a0;
- (BOOL)isAestheticallyPrettyGoodWithAsset:(id)a0;
- (double)scoreWithAsset:(id)a0 inContext:(id)a1;
- (BOOL)isShowcasingFoodWithSceneClassification:(id)a0;
- (BOOL)filterForFoodieWithClassification:(id)a0;
- (BOOL)isUtilityForMemoriesWithAsset:(id)a0 curationContext:(id)a1;
- (BOOL)isUtilityWithAsset:(id)a0;
- (BOOL)isInterestingLivePhotoWithAsset:(id)a0;
- (BOOL)isSemDevSceneDetectedForIdentifier:(unsigned int)a0 withSceneClassification:(id)a1;
- (BOOL)hasInterestingScenesWithAsset:(id)a0;
- (BOOL)isIVSNSFWExplicitWithAsset:(id)a0;
- (BOOL)isMemeWithAsset:(id)a0;
- (id)initWithCurationModelSpecification:(id)a0;
- (BOOL)isTragicFailureWithImageAsset:(id)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0;
- (BOOL)hasPoorResolutionWithAsset:(id)a0;
- (BOOL)isJunkWithJunkClassification:(id)a0;
- (id)newProcessedSignals;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (BOOL)isGoldWithAsset:(id)a0;
- (BOOL)isShinyGemWithAsset:(id)a0;
- (BOOL)isRegularGemWithAsset:(id)a0;
- (BOOL)isBlurryWithAsset:(id)a0;
- (BOOL)isInhabitedWithAsset:(id)a0;
- (BOOL)avoidIfPossibleForMemoryKeyAssetWithAsset:(id)a0;
- (BOOL)isInterestingVideoWithAsset:(id)a0;
- (BOOL)isInterestingPanoramaWithAsset:(id)a0;
- (BOOL)isInterestingSDOFWithAsset:(id)a0;
- (BOOL)isInterestingHDRWithAsset:(id)a0;
- (BOOL)isInterestingReframeWithAsset:(id)a0;
- (BOOL)hasInterestingAudioClassificationWithAsset:(id)a0;
- (short)interestingAudioClassificationsWithAsset:(id)a0;
- (id)processedSignalsFromSignals:(id)a0;
- (id)faceInformationSummaryWithFaces:(id)a0 detectionTraitsByFaceLocalIdentifier:(id)a1 verifiedPersonUUIDs:(id)a2 hiddenPersonUUIDs:(id)a3 personUUIDByMergeCandidateUUID:(id)a4;
- (BOOL)isNonMemorableWithAsset:(id)a0;
- (id)trendsSceneModel;
- (BOOL)isUtilityForVideoAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithVideoAsset:(id)a0;
- (BOOL)isUtilityForMemoriesForImageAsset:(id)a0;
- (BOOL)assetIsJunkWithSceneClassifications:(id)a0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)a1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)a2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)a3 forMemories:(BOOL)a4;
- (BOOL)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)a0 forKeyAsset:(BOOL)a1 forMemories:(BOOL)a2;
- (BOOL)imageAssetIsJunkFromSceneAndJunkClassifications:(id)a0;
- (BOOL)asset:(id)a0 isAestheticallyAwesomeWithContext:(id)a1;
- (BOOL)isBadQualityForImageKeyAssetWithAsset:(id)a0;
- (BOOL)isUtilityForImageAsset:(id)a0;
- (BOOL)isJunkWithSignal:(id)a0 isReliable:(BOOL *)a1;

@end

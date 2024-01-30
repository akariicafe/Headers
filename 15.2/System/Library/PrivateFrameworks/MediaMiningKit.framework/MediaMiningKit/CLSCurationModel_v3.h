@class CLSNSFWModel, CLSTabooEventModel, CLSSDModel, CLSPotentialLandmarkModel;

@interface CLSCurationModel_v3 : CLSCurationModel_v2 {
    BOOL _r14j9IsAvailable;
    CLSNSFWModel *_nsfwModel;
    CLSTabooEventModel *_tabooEventModel;
    CLSPotentialLandmarkModel *_potentialLandmarkModel;
    CLSSDModel *_sdModel;
}

+ (unsigned long long)minimumRequiredSceneAnalysisVersion;

- (void).cxx_destruct;
- (BOOL)isShowcasingFoodWithSceneClassification:(id)a0;
- (BOOL)filterForFoodieWithClassification:(id)a0;
- (BOOL)isUtilityForMemoriesWithAsset:(id)a0 curationContext:(id)a1;
- (id)initWithCurationModelSpecification:(id)a0;
- (BOOL)isTragicFailureWithImageAsset:(id)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithSignals:(id)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0;
- (BOOL)hasPoorResolutionWithAsset:(id)a0;
- (BOOL)isUtilityForMemoriesWithProcessedSignals:(id)a0;
- (BOOL)isJunkWithJunkClassification:(id)a0;
- (id)newProcessedSignals;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;

@end

@class PUPhotoEditImageValues, PICompositionController, NSObject, PLEditSource;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PUPhotoEditValuesCalculator : PXObservable {
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_currentGeometricValues;
    PUPhotoEditImageValues *_initialImageValues;
    PUPhotoEditImageValues *_initialGeometricValues;
    PICompositionController *_compositionControllerForCurrentValues;
    NSObject<OS_dispatch_queue> *_imageValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingImageValuesGroup;
    NSObject<OS_dispatch_queue> *_geometricValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingGeometricValuesGroup;
    long long _currentSourceSelection;
}

@property (retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) BOOL hasImageValues;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoFrameTime;

+ (BOOL)shouldRunGeometricAutoCalculatorForSource:(id)a0;

- (id)mutableChangeObject;
- (id)smartColorStatisticsWithAccuracy:(long long)a0;
- (void)computeAutoEnhanceWithCompletionHandler:(id /* block */)a0;
- (void)precomputeGeometricValues;
- (void).cxx_destruct;
- (id)init;
- (id)autoPerspectiveValuesWithAccuracy:(long long)a0;
- (id)autoCropValuesWithAccuracy:(long long)a0;
- (void)invalidate;
- (void)updateAdjustmentSmartToneStatistics:(id)a0 withAccuracy:(long long)a1;
- (id)apertureValuesWithAccuracy:(long long)a0;
- (id)portraitValuesWithAccuracy:(long long)a0;
- (void)precomputeImageValues;
- (double)smartToneAutoSuggestion;
- (double)smartColorAutoSuggestion;
- (id)currentEditSource;
- (id)smartToneStatisticsWithAccuracy:(long long)a0;
- (id)primarySmartToneStatisticsWithAccuracy:(long long)a0;
- (id)overcaptureSmartToneStatisticsWithAccuracy:(long long)a0;
- (BOOL)_imageCurrentValuesCacheIsValid;
- (BOOL)_geometricCurrentValuesCacheIsValid;
- (void)precomputeImageValuesWithCompletion:(id /* block */)a0;
- (void)precomputeImageValuesWithOptionalCompletion:(id /* block */)a0;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (void)_ensureCurrentGeometricValuesAreComputed;
- (void)_ensureInitialGeometricValuesAreComputed;

@end

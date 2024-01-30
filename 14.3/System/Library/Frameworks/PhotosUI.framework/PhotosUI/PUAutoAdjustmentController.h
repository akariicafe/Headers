@class NSArray, NSDictionary, PICompositionController;
@protocol NUImageProperties;

@interface PUAutoAdjustmentController : NSObject {
    NSArray *_cachedRedEyeCorrections;
    NSDictionary *_cachedWhiteBalanceSettings;
    double _cachedSmartToneLevel;
    double _cachedSmartColorLevel;
    BOOL _cachedValuesAreValid;
    PICompositionController *_stashedPreviousManualComposition;
}

@property (nonatomic, getter=isBusy, setter=_setBusy:) BOOL busy;
@property (retain, nonatomic) id<NUImageProperties> imageProperties;

- (void).cxx_destruct;
- (void)disableAutoEnhanceOnCompositionController:(id)a0;
- (void)enableAutoEnhanceOnCompositionController:(id)a0 valuesCalculator:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isAutoEnhanceEnabledForCompositionController:(id)a0;
- (void)ensureCacheUpToDateForValuesCalculator:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateCachedAdjustments;
- (void)_revertAutoValuesOnCompositionController:(id)a0;
- (void)calculateStatisticsForCompositionController:(id)a0 valuesCalculator:(id)a1 completionHandler:(id /* block */)a2;
- (void)_applyAutoValuesOnCompositionController:(id)a0 whiteBalanceSettings:(id)a1 redEyeCorrections:(id)a2 smartToneLevel:(double)a3 smartColorLevel:(double)a4 valuesCalculator:(id)a5;

@end

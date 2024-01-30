@class NSError, NSString, NSDate, NSNumber, PXUpdater, NSMutableDictionary, NSDictionary, NSObject, NSProgress, NSIndexSet, NSOperation;
@protocol OS_dispatch_queue, PXEditSourceLoader;

@interface PXAssetVariationRenderProvider : PXObservable {
    PXUpdater *_updater;
    NSMutableDictionary *_resultsByVariationType;
    NSMutableDictionary *_progressesByVariationType;
    NSProgress *_recipeGenerationProgress;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _hasBegunRendering;
    NSProgress *_observedEditSourceLoaderProgress;
    unsigned char _signpostID;
}

@property (class, readonly, nonatomic) NSIndexSet *supportedVariationTypes;

@property (retain, nonatomic, setter=_setAnalysisOperation:) NSOperation *_analysisOperation;
@property (readonly, nonatomic) NSMutableDictionary *_renderingOperationsByVariationType;
@property (retain, nonatomic, setter=_setBeginRenderingDate:) NSDate *_beginRenderingDate;
@property (retain, nonatomic) NSNumber *totalRenderingDuration;
@property (retain, nonatomic, setter=_setEditSourceDuration:) NSNumber *_editSourceDuration;
@property (retain, nonatomic, setter=_setRecipeGenerationDuration:) NSNumber *_recipeGenerationDuration;
@property (readonly, nonatomic) NSMutableDictionary *_renderingDurationByVariationType;
@property (nonatomic, setter=_setStatus:) long long status;
@property (copy, nonatomic, setter=_setStatusDescription:) NSString *statusDescription;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (readonly, nonatomic) BOOL _hasAllResults;
@property (copy, nonatomic) NSDictionary *analysisResult;
@property (readonly, nonatomic) id<PXEditSourceLoader> editSourceLoader;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, copy, nonatomic) NSIndexSet *desiredVariationTypes;
@property (nonatomic) BOOL renderAllResources;
@property (readonly, nonatomic) NSProgress *initialLoadingProgress;

+ (id)sharedOperationQueue;
+ (id)_renderingLog;
+ (void)_performSimulatedWorkWithProgress:(id)a0;

- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_invalidateStatus;
- (void)_updateStatus;
- (id)debugDescription;
- (void)unloadResults;
- (void)cancelRendering;
- (void)beginRendering;
- (id)initWithEditSourceLoader:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 desiredVariationTypes:(id)a2;
- (id)renderResultForVariationType:(long long)a0;
- (id)progressForVariationType:(long long)a0;
- (void)_invalidateCachedAnalysisResult;
- (long long)_variationSourceType;
- (void)_updateCachedAnalysisResult;
- (void)_handleCachedAnalysisResult:(id)a0;
- (void)_invalidateAnalysisResult;
- (void)_updateAnalysisResult;
- (void)_handleAnalysisOperationCompleted:(id)a0;
- (void)_invalidateRenders;
- (void)_updateRenders;
- (void)_handleRenderingOperationStarted:(id)a0;
- (void)_handleRenderingOperationCompleted:(id)a0;
- (void)_setResult:(id)a0 forVariationType:(long long)a1;
- (void)_removeAllResults;
- (void)_setProgress:(id)a0 forVariationType:(long long)a1;

@end

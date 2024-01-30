@class JFXEffectContinousPreviewOptions, PVLivePlayer, NSMapTable, NSString, NSValue, JFXEffectPreviewDiskCache, NSSet, JTImage, JFXLRUCache, JFXEffectsPreviewGenerator, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, JFXEffectPreviewManagerDelegate, OS_dispatch_semaphore;

@interface JFXEffectPreviewManager : NSObject <PVLivePlayerDelegate> {
    struct { BOOL updateContinousPreviewsForEffectIds; BOOL willBeginDownloadingPreviewAssetsForEffect; BOOL downloadingPreviewAssetsForEffect; BOOL didFinishDownloadingPreviewAssetsForEffect; } _delegateAvailability;
    BOOL _inDealloc;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) JFXLRUCache *previewCache;
@property (readonly, nonatomic) JFXEffectPreviewDiskCache *previewDiskCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentStaticPreviewSemaphore;
@property (readonly, nonatomic) NSObject *pickerPreviewingToken;
@property (weak, nonatomic) id<JFXEffectPreviewManagerDelegate> delegate_internal;
@property (nonatomic) BOOL continouslyPreviewing_internal;
@property (retain, nonatomic) JTImage *defaultPreviewImage_internal;
@property (retain, nonatomic) NSValue *_defaultPreviewImageDisplayTransformValue_internal;
@property (retain, nonatomic) JFXEffectsPreviewGenerator *staticPreviewGenerator;
@property (retain, nonatomic) PVLivePlayer *continousPreviewPlayer;
@property (nonatomic) struct CGSize { double width; double height; } continousPreviewSize;
@property (retain, nonatomic) JFXEffectContinousPreviewOptions *continousPreviewOptions;
@property (retain, nonatomic) NSMutableSet *preparedContinousPreviewEffects;
@property (retain, nonatomic) NSMutableSet *effectsPreparingForPreview;
@property (retain, nonatomic) NSSet *currentContinousPreviewEffects;
@property (retain, nonatomic) NSMapTable *assetRequestsForPreviewEffects;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<JFXEffectPreviewManagerDelegate> delegate;
@property (copy, nonatomic) NSSet *continousPreviewEffects;
@property (readonly, nonatomic, getter=isContinouslyPreviewing) BOOL continouslyPreviewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JFX_createTransparentEmptyImageForPreviewSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultPreviewImage;
- (id)initWithName:(id)a0 callbackQueue:(id)a1;
- (void)startPreparingPreviewsContinuouslyAtSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (void)previewForEffect:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2 completion:(id /* block */)a3;
- (void)continousPreviewsForEffectIDs:(id)a0 completion:(id /* block */)a1;
- (id)buildRenderRequest:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)renderRequestComplete:(id)a0 results:(id)a1 completedOutOfOrder:(BOOL)a2;
- (void)JFX_stopCachingPreviewsContinuously;
- (void)JFX_cancelAssetRequestForAllEffects;
- (void)JFX_setContinousPreviewEffects:(id)a0;
- (void)JFX_prepareEffectForContinousPreview:(id)a0;
- (void)JFX_updateAssetRequestsPriorityAssociatedWithEffects:(id)a0 toPriority:(long long)a1;
- (void)JFX_updateAssetRequestsPriorityNotAssociatedWithEffects:(id)a0 toPriority:(long long)a1;
- (void)JFX_delegateWillBeginDownloadingPreviewAssetsForEffect:(id)a0;
- (void)JFX_delegateDownloadingPreviewAssetsForEffect:(id)a0 progress:(double)a1;
- (void)JFX_delegateDidFinishDownloadingPreviewAssetsForEffect:(id)a0 wasCancelled:(BOOL)a1 error:(id)a2;
- (void)setContinouslyPreviewing:(BOOL)a0;
- (void)JFX_startPreparingPreviewsContinuouslyAtSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (void)setDefaultPreviewImage:(id)a0 transformValue:(id)a1;
- (void)JFX_configureCommonRenderingPropertiesForEffect:(id)a0 forPreviewSize:(struct CGSize { double x0; double x1; })a1 withPreviewOptions:(id)a2;
- (void)JFX_loadRenderingResourcesForEffect:(id)a0 completion:(id /* block */)a1;
- (void)JFX_requestPreviewAssetsForEffect:(id)a0 withPriority:(long long)a1 onlyThumbnailAssetWhenAvailable:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)JFX_rendersDefaultContinousPreviewImage;
- (BOOL)JFX_lowPriorityScheduling;
- (void)JFX_delegateUpdateContinousPreviewsForEffectIDs:(id)a0;
- (void)JFX_renderPreviewForEffect:(id)a0 previewSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2 completion:(id /* block */)a3;
- (void)preparePreviewForEffect:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 options:(id)a2 completion:(id /* block */)a3;
- (void)cachedPreviewForEffect:(id)a0 completion:(id /* block */)a1;
- (void)JFX_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(id /* block */)a0;
- (id)defaultPreviewImageDisplayTransformValue;
- (void)stopCachingPreviewsContinuously;
- (void)purgeCachedPreviewForEffect:(id)a0;
- (void)purgeCachedPreviewsForAllEffects;

@end

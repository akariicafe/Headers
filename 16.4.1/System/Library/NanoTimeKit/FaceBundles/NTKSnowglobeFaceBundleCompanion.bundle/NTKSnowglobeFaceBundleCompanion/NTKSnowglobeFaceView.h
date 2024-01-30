@class NTKRoundedCornerOverlayView, NTKSnowglobeSceneController, UITapGestureRecognizer, NTKSnowglobeSceneQuad, NTKSnowglobeMotionToken, CLKUIQuadView, NSObject, NTKSnowglobeAssetLibrary;
@protocol OS_dispatch_queue;

@interface NTKSnowglobeFaceView : NTKFaceView {
    CLKUIQuadView *_quadView;
    NTKSnowglobeSceneQuad *_sceneQuad;
    NTKSnowglobeSceneController *_sceneController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NTKSnowglobeAssetLibrary *_assetLibrary;
    NTKRoundedCornerOverlayView *_cornerOverlayView;
    NTKSnowglobeMotionToken *_motionToken;
    NSObject<OS_dispatch_queue> *_asyncRenderQueue;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)_sharedRenderTargetQueue;

- (void)setTimeOffset:(double)a0;
- (id)colorPalette;
- (void)dealloc;
- (void)_updateScene;
- (void).cxx_destruct;
- (void)_setupScene;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_cleanupAfterEditing;
- (void)_finalizeForSnapshotting:(id /* block */)a0;
- (void)_loadSnapshotContentViews;
- (void)_prepareForEditing;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_unloadSnapshotContentViews;
- (BOOL)_wantsStatusBarIconShadow;
- (id)createFaceColorPalette;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)_loadCornerOverlayView;
- (void)_tappedWithSender:(id)a0;
- (void)_unloadCornerOverlayView;
- (void)_updateMotionPauseState;
- (void)_updateViewColorsWithPalette:(id)a0;

@end

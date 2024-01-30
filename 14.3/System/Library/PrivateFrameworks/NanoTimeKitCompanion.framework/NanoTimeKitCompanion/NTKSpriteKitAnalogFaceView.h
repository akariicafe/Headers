@class NTKAnalogScene, SKView, UIView;

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView {
    SKView *_sceneHostView;
}

@property (weak, nonatomic) UIView *circleView;
@property (weak, nonatomic) UIView *handsView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic) BOOL shouldRasterizeBackground;
@property (retain, nonatomic) NTKAnalogScene *analogScene;
@property (readonly, nonatomic) UIView *sceneView;

+ (void)_prewarmForDevice:(id)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_sceneSize;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (BOOL)_needsForegroundContainerView;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyFrozen;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)_setZoomFraction:(double)a0 iconDiameter:(double)a1;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (void)_prepareForSnapshotting;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (void)_loadScene;
- (void)_setContentViewsOpaque:(BOOL)a0;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (BOOL)_shouldFreezeSceneForEditMode:(long long)a0;
- (void)_setupSceneHostViewIfNecessary;
- (void)_loadLiveBackground;

@end

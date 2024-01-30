@class NTKPrideBetweenCircularQuad, CLKUIQuadView, NTKPrideAnalogFaceViewComplicationFactory, NTKPrideCircularQuad, NTKComplicationDisplayWrapperView;

@interface NTKPrideAnalogFaceView : NTKAnalogFaceView {
    NTKComplicationDisplayWrapperView *_touchWrapper;
    NTKPrideAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    CLKUIQuadView *_bandsView;
    NTKPrideCircularQuad *_bandsQuad;
    NTKPrideBetweenCircularQuad *_ribbonsQuad;
    NTKPrideCircularQuad *_activeQuad;
    float _contentScale;
    float _complicationBrightness;
    BOOL _wasSlow;
    BOOL _useXR;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_updatePausedState;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (id)_detachedComplicationDisplays;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (void)_handleOrdinaryScreenWake;
- (void)_finalizeForSnapshotting:(id /* block */)a0;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (double)keylineStyleForComplicationSlot:(id)a0;
- (double)_handAlphaForEditMode:(long long)a0;
- (double)_contentAlphaForEditMode:(long long)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (void)_applySlow;
- (long long)_utilitySlotForSlot:(id)a0;
- (id)_slotForUtilitySlot:(long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)handleScreenBlanked;
- (BOOL)_supportsUnadornedSnapshot;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (id)_complicationDisplayWrapperForTouch:(id)a0;
- (void)_loadBackgroundViews;
- (void)_unloadBackgroundViews;
- (void)setActiveQuad:(id)a0;
- (BOOL)_isActiveFace;
- (void)_updateComplicationColors;
- (id)adjustBrightnessOfColor:(id)a0 brightnessAmount:(double)a1;
- (double)_contentScaleForEditMode:(long long)a0;

@end

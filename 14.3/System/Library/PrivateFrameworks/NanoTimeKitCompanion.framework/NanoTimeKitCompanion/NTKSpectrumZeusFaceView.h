@class NTKSpectrumConicQuad, CLKUIQuadView, UIImageView, UIView, NTKZeusColorPalette;

@interface NTKSpectrumZeusFaceView : NTKAnalogFaceView {
    NTKSpectrumConicQuad *_conicActiveQuad;
    NTKSpectrumConicQuad *_conicInactiveQuad;
    CLKUIQuadView *_conicQuadView;
    UIView *_cornerView;
    NTKZeusColorPalette *_palette;
    UIImageView *_logoView1;
    UIImageView *_logoView2;
    unsigned long long _style;
}

+ (id)_supportedComplicationSlots;

- (void)_updateStyle;
- (void).cxx_destruct;
- (void)setDataMode:(long long)a0;
- (void)dealloc;
- (void)_updateColor;
- (void)_setStyle:(unsigned long long)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (void)_applyFrozen;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_loadCommonViews;
- (void)_loadActiveViews;
- (void)_unloadActiveViews;
- (void)_unloadCommonViews;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)_updateFramerate;
- (void)_configureTimeView:(id)a0;
- (void)_applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (double)_handAlphaForEditMode:(long long)a0;
- (double)_contentAlphaForEditMode:(long long)a0;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (void)_reorderSwitcherSnapshotView;
- (id)_snapshotWithStyle:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_updateDateComplicationPositionIfNecessary;

@end

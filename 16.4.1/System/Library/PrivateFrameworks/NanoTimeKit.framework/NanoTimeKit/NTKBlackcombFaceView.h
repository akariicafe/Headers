@class NTKFullscreenSubdialComplicationFactory, NSString, NTKBlackcombBackgroundView, UIView, NTKBlackcombColorPalette, NTKInterpolatedColorPalette;

@interface NTKBlackcombFaceView : NTKAnalogFaceView <CLKMonochromeFilterProvider> {
    NTKFullscreenSubdialComplicationFactory *_complicationFactory;
    UIView *_backgroundContainerView;
    NTKBlackcombBackgroundView *_backgroundView;
    NTKBlackcombColorPalette *_blackcombPalette;
    NTKInterpolatedColorPalette *_dialColorStyleTransitionPalette;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupBackgroundView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)_editMode;
- (void)_applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2 force:(BOOL)a3;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyComplicationTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (BOOL)_backgroundViewShouldUseLongSideTicks;
- (void)_cleanupAfterEditing;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_configureTimeView:(id)a0;
- (void)_forceUpdateColors;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (id)_platterTextColorForEditMode:(long long)a0 color:(id)a1;
- (void)_prepareForEditing;
- (void)_prepareForSnapshotting;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_removeBackgroundView;
- (id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(unsigned long long)a0;
- (void)_reorderSwitcherSnapshotView;
- (id)_secondHandColor;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (void)_unloadSnapshotContentViews;
- (void)_updateHandsColors;
- (void)_updateTickLengths;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_wantsStatusBarIconShadow;
- (id)createFaceColorPalette;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)updateBlackcombDialColorStyle:(unsigned long long)a0;
- (void)updateWithColorPalette:(id)a0;

@end

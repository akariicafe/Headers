@class NTKFullscreenSubdialComplicationFactory, NSString, NTKBlackcombDialColorPalette, NTKBlackcombBackgroundView, UIView, UIImageView;

@interface NTKBlackcombFaceView : NTKAnalogFaceView <CLKMonochromeFilterProvider> {
    NTKFullscreenSubdialComplicationFactory *_complicationFactory;
    unsigned long long _faceColor;
    NTKBlackcombDialColorPalette *_dialColorPalette;
    UIView *_backgroundContainerView;
    NTKBlackcombBackgroundView *_backgroundView;
    UIImageView *_editingNotchBackgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (long long)_editMode;
- (void)layoutSubviews;
- (void)_setupBackgroundView;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_configureTimeView:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (id)_pickerMaskForSlot:(id)a0;
- (id)_customEditOptionContainerViewForSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (BOOL)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (void)_reorderSwitcherSnapshotView;
- (void)_prepareForSnapshotting;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (void)_removeBackgroundView;
- (id)_platterTextColorForEditMode:(long long)a0 color:(unsigned long long)a1;
- (void)setFaceColor:(unsigned long long)a0;
- (void)_updateHandsColors;
- (void)_forceUpdateColors;
- (void)_updateTickLengths;
- (BOOL)_backgroundViewShouldUseLongSideTicks;
- (void)setBlackcombDialColor:(unsigned long long)a0;
- (void)_applyTransitionFraction:(double)a0 fromBlackcombDialColor:(unsigned long long)a1 toBlackcombDialColor:(unsigned long long)a2;
- (id)_secondHandColorFor:(unsigned long long)a0;
- (void)_applyComplicationTransitionFraction:(double)a0 fromBlackcombDialColor:(unsigned long long)a1 toBlackcombDialColor:(unsigned long long)a2;
- (id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(unsigned long long)a0;

@end

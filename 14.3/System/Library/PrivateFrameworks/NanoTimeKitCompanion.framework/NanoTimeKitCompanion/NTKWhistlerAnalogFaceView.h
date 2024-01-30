@class NSString, NTKWhistlerAnalogColorPalette, NTKCircularAnalogDialView, NTKWhistlerAnalogFaceViewComplicationFactory;

@interface NTKWhistlerAnalogFaceView : NTKAnalogFaceView <NTKRichComplicationBezelViewDelegate, CLKMonochromeFilterProvider> {
    NTKWhistlerAnalogFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKCircularAnalogDialView *_dialView;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    double _bezelLabelCurvedRadius;
}

@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned long long dateStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (double)curvedRadiusForDevice:(id)a0 dark:(BOOL)a1;

- (void).cxx_destruct;
- (long long)_editMode;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)_verticalPaddingForStatusBar;
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
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)a0;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_configureTimeView:(id)a0;
- (void)_configureUIOnColorChange;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)a0;
- (void)_updateDialTicksForBezelText;
- (void)_applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (double)_handAlphaForEditMode:(long long)a0;
- (double)_contentAlphaForEditMode:(long long)a0;
- (id)_pickerMaskForSlot:(id)a0;
- (id)_customEditOptionContainerViewForSlot:(id)a0;
- (void)_setupDialView;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (long long)_richComplicationViewThemeFromFaceColor:(unsigned long long)a0;
- (void)_reorderSwitcherSnapshotView;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (double)_contentScaleForEditMode:(long long)a0;
- (void)didUpdateBezelTextForRichComplicationBezelView:(id)a0;
- (id)_platterTextColorForEditMode:(long long)a0 color:(unsigned long long)a1;
- (id)_bezelTextColorForEditMode:(long long)a0 color:(unsigned long long)a1;
- (id)_complicationPickerKeylineViewForComplicationSlot:(id)a0;
- (void)_applyEnteringEditingWithTransitionFraction:(double)a0;
- (void)_applyExitingEditingWithTransitionFraction:(double)a0;
- (id)_richComplicationViewForView:(id)a0;
- (double)_bezelLabelCurvedRadiusForColor:(unsigned long long)a0;
- (void)complicationDisplayWrapperView:(id)a0 updateCustomDataAnimationFromEarlierView:(id)a1 laterView:(id)a2 isForward:(BOOL)a3 animationType:(unsigned long long)a4 animationDuration:(double)a5 animationFraction:(float)a6;
- (void)bezelViewDidBecomeInteractive:(id)a0;
- (void)bezelViewDidEndInteractive:(id)a0;
- (double)_dialTextBackgroundAlphaForEditMode:(long long)a0;
- (double)_bezelCircularBackgroundFromComplication:(id)a0;

@end

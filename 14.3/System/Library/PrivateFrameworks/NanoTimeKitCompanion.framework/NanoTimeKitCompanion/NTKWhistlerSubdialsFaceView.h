@class NSString, UIView;

@interface NTKWhistlerSubdialsFaceView : NTKFaceView <NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider> {
    UIView *_timeViewContainerView;
    unsigned long long _faceColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
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
- (id)complicationPickerViewForSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (void)_setupDialView;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (BOOL)_isAnalog;
- (id)dialView;
- (void)setFaceColor:(unsigned long long)a0;
- (void)rectangularViewDidBecomeInteractive:(id)a0;
- (void)rectangularViewDidEndInteractive:(id)a0;
- (double)_timeViewAlphaForEditMode:(long long)a0;
- (void)updateMonochromeColorForRichComplicationView:(id)a0;
- (void)_removeDialView;
- (id)_renderDialSwatchImageForStyle:(unsigned long long)a0 color:(unsigned long long)a1;
- (double)_horizontalPaddingForStatusBar;
- (BOOL)_shouldShowEditingPageDotsOnBottom;

@end

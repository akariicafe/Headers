@class NSString, UIView;

@interface NTKWhistlerSubdialsFaceView : NTKFaceView <NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider> {
    UIView *_timeViewContainerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)updateWithColorPalette:(id)a0;
- (void)_configureForEditMode:(long long)a0;
- (id)createFaceColorPalette;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (BOOL)_isAnalog;
- (id)dialView;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_relativeKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)updateMonochromeColorForRichComplicationView:(id)a0;
- (void)_setupDialView;
- (void)_removeDialView;
- (void)_applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (double)_timeViewAlphaForEditMode:(long long)a0;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_renderDialSwatchImageForStyle:(unsigned long long)a0 colorOption:(id)a1;
- (void)rectangularViewDidBecomeInteractive:(id)a0;
- (void)rectangularViewDidEndInteractive:(id)a0;
- (double)_horizontalPaddingForStatusBar;

@end

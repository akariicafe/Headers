@class NSString;

@interface NTKWhistlerDigitalFaceView : NTKDigitalFaceView <NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider> {
    BOOL _is24HourMode;
    unsigned long long _faceColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;

- (void)dealloc;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (unsigned long long)_timeLabelOptions;
- (id)complicationPickerViewForSlot:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (void)_updateLocale;
- (id)_defaultDateTextColor;
- (id)_defaultDateAccentColor;
- (void)_loadLayoutRulesForState:(long long)a0 withTopGap:(double)a1 largeModuleHeight:(double)a2;
- (void)setFaceColor:(unsigned long long)a0;
- (long long)complicationFamilyForSlot:(id)a0;
- (void)rectangularViewDidBecomeInteractive:(id)a0;
- (void)rectangularViewDidEndInteractive:(id)a0;

@end

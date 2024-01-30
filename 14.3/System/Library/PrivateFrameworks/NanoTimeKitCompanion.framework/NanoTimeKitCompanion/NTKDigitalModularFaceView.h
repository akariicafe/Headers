@class NSString, NSDateComponentsFormatter, CLKTimeFormatter;

@interface NTKDigitalModularFaceView : NTKDigitalFaceView <NTKTimeModuleViewTapClient> {
    unsigned long long _faceColor;
    BOOL _is24HourMode;
    CLKTimeFormatter *_dateFormatter;
    NSDateComponentsFormatter *_dayOffsetDateFormatter;
    NSDateComponentsFormatter *_subdayOffsetDateFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (void)_performIfNonRichModuleView:(id)a0 actions:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)a0;
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
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (unsigned long long)_timeLabelOptions;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)performTapAction;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (void)_updateLocale;
- (void)_loadLayoutRulesForState:(long long)a0 withTopGap:(double)a1 largeModuleHeight:(double)a2;
- (long long)complicationFamilyForSlot:(id)a0;
- (void)_applyFaceColor:(unsigned long long)a0 toModuleView:(id)a1;
- (void)_enumerateModuleViewsWithBlock:(id /* block */)a0;
- (id)_complicationSlotsForRow:(unsigned long long)a0;
- (id)_moduleViewForComplicationSlot:(id)a0;

@end

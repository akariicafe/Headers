@class NTKColorAnalogBackgroundView, UIColor, UIView;

@interface NTKColorAnalogFaceView : NTKAnalogFaceView {
    UIView *_backgroundComplicationContainerView;
    NTKColorAnalogBackgroundView *_backgroundView;
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
    UIColor *_monogramForegroundColor;
    unsigned long long _currentStyle;
    unsigned long long _currentColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _monogramOverrideFrame;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (Class)_timeViewClass;

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
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_configureTimeView:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (BOOL)_wantsStatusBarIconShadow;
- (BOOL)_wantsConstantSpeedZoom;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_edgeGapForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (id)_complicationContainerViewForSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForComplicationDisplayWrapper:(id)a0 inSlot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_monogramReferenceFrameForState:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_monogramKeylinePadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_monogramReferenceFrameForState:(long long)a0 style:(unsigned long long)a1;
- (void)_enumerateColorComplicationSlotsWithBlock:(id /* block */)a0;
- (id)_colorComplicationViewForSlot:(id)a0;

@end

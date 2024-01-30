@class UIColor, NSString, NTKUtilityComplicationFactory, UIView, NTKSimpleAnalogFaceViewTicksView;

@interface NTKSimpleAnalogFaceView : NTKAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {
    NTKUtilityComplicationFactory *_complicationFactory;
    UIColor *_accentColor;
    UIColor *_ticksSmallColor;
    UIColor *_ticksLargeColor;
    double _ticksSmallLightness;
    double _ticksLargeLightness;
    UIView *_backgroundView;
    NTKSimpleAnalogFaceViewTicksView *_ticksViews[4];
    unsigned long long _density;
    unsigned long long _dateStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)_swatchImageFaceName;

- (void)_setupViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_verticalPaddingForStatusBar;
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
- (void)_loadLayoutRules;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_slotSupportsCurvedText:(id)a0;
- (id)_pickerMaskForSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)_curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (long long)_utilitySlotForSlot:(id)a0;
- (BOOL)slotUsesCurvedText:(long long)a0;
- (id)_slotForUtilitySlot:(long long)a0;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)a0;
- (void)cleanupAfterEditing;
- (double)_backgroundAlphaForEditMode:(long long)a0;
- (double)_handsAlphaForEditMode:(long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_updateDateComplicationPositionIfNecessary;
- (id)_dateComplicationFontForStyle:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_dateComplicationCenterOffset;
- (struct CGPoint { double x0; double x1; })_dateComplicationRightAlignment;
- (void)_applyForegroundAlphaForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_configureComplicationFactory:(id)a0;
- (void)_removeViews;
- (void)_updateComplicationOverlapHiding;
- (id)_faceColorSchemeForFaceColor:(unsigned long long)a0;
- (id)_createTicksViewForDensityIfNeeded:(unsigned long long)a0;
- (void)_setDensity:(unsigned long long)a0;
- (double)_secondHandAlphaForEditMode:(long long)a0;
- (void)_removeComplicationOverlapHiding;
- (id)_keylineViewForColorEditing;
- (id)_keylineViewForDensityEditing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForColorEditing;
- (void)_createBackgroundViewIfNeeded;
- (void)_addDetailedMinutesToView:(id)a0;
- (double)alphaForDimmedState;
- (unsigned long long)_keylineLabelAlignmentForColorEditing;

@end

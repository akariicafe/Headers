@class NTKVictoryAnalogBackgroundView, NSString, NTKRoundedCornerOverlayView, NTKUtilityComplicationFactory;

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityComplicationFactoryDelegate> {
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKVictoryAnalogBackgroundView *_backgroundView;
    NTKRoundedCornerOverlayView *_cornerView;
    BOOL _isFullBleed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
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
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_configureTimeView:(id)a0;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (BOOL)_wantsStatusBarIconShadow;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (long long)_utilitySlotForSlot:(id)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (BOOL)slotUsesCurvedText:(long long)a0;
- (id)_slotForUtilitySlot:(long long)a0;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_timeTravelStatusModuleCenter;
- (void)_setFullBleed:(BOOL)a0;
- (void)_applyComplicationViewColor:(id)a0;
- (void)_applyColor:(id)a0 toComplicationView:(id)a1;
- (double)_backgroundAlphaForEditMode:(long long)a0;
- (double)_handsAlphaForEditMode:(long long)a0;
- (void)logoTappedFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_editSpeedForCustomEditMode:(long long)a0 slot:(id)a1;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_layoutTimeTravelCaptionView:(id)a0;
- (double)_keylineEdgeGapForState:(long long)a0;

@end

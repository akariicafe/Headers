@class NTKNumeralsHourViewsManager, NTKUtilityComplicationFactory, NTKEditOptionPickerView, CLKClockTimerToken;

@interface NTKNumeralsAnalogFaceView : NTKAnalogFaceView {
    NTKUtilityComplicationFactory *_complicationFactory;
    long long _utilitySlot;
    BOOL _areAllComplicationsOff;
    BOOL _complicationPositionNeedsUpdate;
    unsigned long long _faceColor;
    NTKEditOptionPickerView *_stylePickerView;
    NTKNumeralsHourViewsManager *_hourViewsManager;
    unsigned long long _selectedStyle;
    CLKClockTimerToken *_clockTimerToken;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)_currentHour;
- (void)layoutSubviews;
- (void)_displayLinkFired;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
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
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_applyFrozen;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_timeTravelStatusModuleCenter;
- (double)_handsAlphaForEditMode:(long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_applyForegroundAlphaForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_configureComplicationFactory:(id)a0;
- (double)_secondHandAlphaForEditMode:(long long)a0;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (id)_faceConfiguration;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (void)_handleTimeChange;
- (void)_updateComplicationAndHourNodePlacementsWithToHour:(long long)a0 duration:(double)a1;
- (BOOL)_isInTimeTravel;
- (id)_faceCurrentDate;
- (void)_prepareForHourChangeWithSecondsUntilChange:(double)a0;
- (long long)_complicationPlacementForCurrentHour;
- (void)_updateAreAllComplicationsOffState;
- (void)_applyFaceColor:(unsigned long long)a0 toComplicationView:(id)a1;
- (void)_configureForStyleEditing;
- (void)_cleanupAfterStyleEditing;
- (void)_enumerateComplicationViewsWithBlock:(id /* block */)a0;
- (void)_applyStyle:(unsigned long long)a0;
- (long long)_styleIndexForStyle:(unsigned long long)a0;
- (void)_loadHoursManagerIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForStyleEditing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForFullScreenEditingReducedForOutsideLabel;
- (void)endScrubbingAnimated:(BOOL)a0;
- (long long)_complicationPlacementForHour:(long long)a0;
- (BOOL)_needComplicationAnimationForChangeToHour:(long long)a0;
- (void)_updateComplicationPositionWithAnimationProgress:(double)a0;

@end

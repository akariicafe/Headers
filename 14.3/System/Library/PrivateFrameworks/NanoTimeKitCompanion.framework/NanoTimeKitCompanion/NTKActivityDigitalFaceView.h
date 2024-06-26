@class UIView, NSString, ARUIRingsView, NTKActivityFaceViewFactory, NTKFaceViewTapControl, NSDate, NTKPolygonCylinderView, UILabel;

@interface NTKActivityDigitalFaceView : NTKDigitalFaceView <NTKActivityFaceViewFactoryDelegate> {
    NTKActivityFaceViewFactory *_faceViewFactory;
    ARUIRingsView *_ringsView;
    UILabel *_moveLabel;
    UILabel *_exerciseLabel;
    UILabel *_standLabel;
    NTKFaceViewTapControl *_tapToLaunchButton;
    UIView *_timeLabelBackgroundView;
    NTKPolygonCylinderView *_densityEditingPolygonView;
    NSDate *_timeDensityEditingOverrideDate;
    struct RingLayout { double bottomEdgeInset; double leftEdgeInset; double diameter; double thickness; double interspacing; } _currentRingLayout;
    double _lastMovePercentage;
    double _lastExercisePercentage;
    double _lastStandPercentage;
    double _blinkerAndSecondsWidth;
    long long _moveStringMetricWidth;
    long long _exerciseStringMetricWidth;
    long long _standStringMetricWidth;
}

@property (nonatomic) double rightTimeViewInset;
@property (nonatomic) BOOL showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (void)_prewarmForDevice:(id)a0;
+ (id)_newRingsView;

- (void).cxx_destruct;
- (void)setDataMode:(long long)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
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
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (unsigned long long)_timeLabelOptions;
- (void)_layoutForegroundContainerView;
- (void)_applyFrozen;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_setZoomFraction:(double)a0 iconDiameter:(double)a1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (BOOL)slotUsesCurvedText:(id)a0;
- (void)_applyCurrentEntryModelByFraction:(double)a0 updateLabels:(BOOL)a1 animated:(BOOL)a2;
- (void)_enumerateActivityLabels:(id /* block */)a0;
- (void)_launchButtonPressed:(id)a0;
- (id)_newActivitySubviewWithTextColor:(id)a0;
- (double)_ringAlphaForEditMode:(long long)a0;
- (void)applyEntryModel:(id)a0 animated:(BOOL)a1;
- (void)applyEntryModelWithUnfilledRings:(id)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_createTimeViewIfNecessary;
- (double)_timeAlphaForEditMode:(long long)a0;
- (void)_createActivityRelatedUIs;
- (void)_updateTimeViewSecondsDisplayState;
- (void)_applyCurrentRingLayout;
- (void)_removeActivityRelatedUIs;
- (void)_updateCurrentRingLayoutIfNecessary;
- (struct CGPoint { double x0; double x1; })_ringCenterForLayout:(struct RingLayout { double x0; double x1; double x2; double x3; double x4; })a0;
- (void)_setActivityViewsAlpha:(double)a0 animated:(BOOL)a1;
- (double)_rightTimeViewInsetForEditMode:(long long)a0;
- (void)_configureForDetailEditing;
- (void)_cleanUpAfterDetailEditing;
- (long long)_polygonIndexForAccuracy:(unsigned long long)a0;
- (void)_applyEntryModel:(id)a0 byFraction:(double)a1 updateLabels:(BOOL)a2 animated:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeViewBackgroundRect;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)a0;
- (double)_blinkerAndSecondsWidth;

@end

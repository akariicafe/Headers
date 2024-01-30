@class NTKDigitalTimeLabel, NSString, NTKDigitalTimeLabelStyle, UIView, NTKExtraLargeTimeView, NTKFaceColorScheme;

@interface NTKExtraLargeFaceView : NTKFaceView <CLKMonochromeFilterProvider> {
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    NTKFaceColorScheme *_colorScheme;
    unsigned long long _faceColor;
    NTKExtraLargeTimeView *_largeTimeLabel;
    NTKDigitalTimeLabel *_smallTimeLabel;
    NTKDigitalTimeLabelStyle *_smallTimeLabelStyle;
    BOOL _viewsOffsetForStatusBar;
    BOOL _isEditing;
    BOOL _complicationIsVisible;
    BOOL _snapshotContentViewsLoaded;
    UIView *_complicationEditingTimeOverlayView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_applyShowContentForUnadornedSnapshot;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_updateComplicationVisibility;
- (void)_layoutForegroundContainerView;
- (void)_createTimeViews;
- (void)_removeTimeViews;
- (double)_statusBarOffsetForComplicationBackground;
- (void)_applyFaceColorToRichComplicationView:(id)a0;
- (void)_applyColor:(id)a0 toRichComplicationView:(id)a1 withFraction:(double)a2 isMonochrome:(BOOL)a3;
- (id)_richComplicationSecondaryColor;
- (BOOL)shouldFlipColorsForRichComplicationView:(id)a0;
- (id)_complicationView;
- (double)_statusBarOffsetForComplication;
- (void)_layoutSmallTimeLabel;
- (double)_statusBarOffsetForSmallTime;
- (void)_applyFrozen;
- (void)_initSmallTimeLabelIfNecessary;
- (void)_initLargeTimeLabelIfNecessary;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (double)_smallTimeAlphaForEditMode:(long long)a0;
- (void)_configureLargeTimeLabelColors;
- (void)_configureSmallTimeLabelColors;
- (void)_applyComplicationTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_noteComplicationVisibilityChanged;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;

@end

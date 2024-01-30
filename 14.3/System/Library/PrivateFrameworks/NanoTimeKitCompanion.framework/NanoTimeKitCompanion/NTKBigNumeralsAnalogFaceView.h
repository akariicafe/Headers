@class CAGradientLayer, CALayer, UIView, NTKBigNumeralsTimeComponentLabel, CLKClockTimerToken;

@interface NTKBigNumeralsAnalogFaceView : NTKAnalogFaceView {
    UIView *_hourLabelContainerView;
    NTKBigNumeralsTimeComponentLabel *_hourLabel;
    CLKClockTimerToken *_timerToken;
    BOOL _showingStatusBar;
    CAGradientLayer *_gradientLayer;
    CALayer *_labelColorLayer;
}

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (id)_renderTimeViewSwatchImageForStyle:(unsigned long long)a0 typeface:(unsigned long long)a1 color:(unsigned long long)a2;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyDataMode;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (void)_reorderSwitcherSnapshotView;
- (void)_updateHourLabelText;
- (void)_createHourLabel;
- (void)_removeHourLabel;
- (void)_updateHourLabelColor;
- (void)_updateHourLabelColorForColor:(unsigned long long)a0;

@end

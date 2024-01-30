@class NSString, UIImageView, UIView, NTKEditOption, NTKComplicationDisplayWrapperView;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate> {
    NTKEditOption *_editOptionFrom;
    UIView *_transitionViewFrom;
    NTKEditOption *_editOptionTo;
    UIView *_transitionViewTo;
    UIView *_transitionDimmingView;
    BOOL _shouldAdjustLayoutForTimeTravel;
    UIView *_timeTravelDimmingOverlayView;
    UIView *_selectedContentView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    NTKComplicationDisplayWrapperView *_touchWrapper;
}

@property (retain, nonatomic) UIView *zoomMaskView;
@property (retain, nonatomic) UIImageView *zoomVignette;
@property (nonatomic) struct CGPoint { double x; double y; } timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vignetteZoomStartingBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskZoomStartingBounds;
@property (retain, nonatomic) UIView *borrowedCircleView;
@property (retain, nonatomic) UIView *borrowedTimeView;
@property (readonly, nonatomic) UIView *backgroundContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setViewMode:(long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_animationImageView;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyScaleTransform:(id)a0;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (double)_backgroundImageAlphaForEditMode:(long long)a0;
- (void)_beginTransitionToOption;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_complicationDisplayWrapperForTouch:(id)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_didTransitionToOptionView:(id)a0;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (double)_parallaxScaleFactor;
- (void)_prepareForEditing;
- (void)_removeAllSubviewsFrom:(id)a0;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (id)_selectedContentView;
- (BOOL)_shouldAdjustLayoutForTimeTravel;
- (BOOL)_shouldFadeToTransitionView;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (double)_timeLabelAlphaForEditMode:(long long)a0;
- (BOOL)_timeLabelUsesLegibility;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (id)_updateFontInStyle:(id)a0 monospace:(BOOL)a1;
- (id)_viewForEditOption:(id)a0;

@end

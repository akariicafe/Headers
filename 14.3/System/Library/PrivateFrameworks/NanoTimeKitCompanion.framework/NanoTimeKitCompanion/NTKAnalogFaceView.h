@class NTKAnalogHandsView, UIView;

@interface NTKAnalogFaceView : NTKFaceView

@property (retain, nonatomic) UIView *zoomingClippingView;
@property (weak, nonatomic) UIView *borrowedCircleView;
@property (weak, nonatomic) UIView *borrowedHandsView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) BOOL _contentViewsOpaque;
@property (nonatomic, setter=_setTimeViewBehindContentView:) BOOL _timeViewBehindContentView;
@property (readonly, nonatomic) UIView *dialComplicationContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *timeView;

+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (BOOL)_needsForegroundContainerView;
- (BOOL)_supportsTimeScrubbing;
- (BOOL)_usesCustomZoom;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (void)_configureTimeView:(id)a0;
- (void)_setZoomFraction:(double)a0 iconDiameter:(double)a1;
- (BOOL)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_updateDateComplicationPositionIfNecessary;
- (struct CGPoint { double x0; double x1; })_dateComplicationCenterOffset;
- (struct CGPoint { double x0; double x1; })_dateComplicationRightAlignment;
- (BOOL)_canStartTimeScrubbing;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (id)_complicationContainerViewForSlot:(id)a0;
- (BOOL)_isAnalog;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (void)_createTimeViewIfNecessary;
- (void)_handleLocaleDidChange;
- (id)_timeTravelCaptionFontSizeOverrides;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (BOOL)_shouldRasterizeForegroundContainerViewForEditMode:(long long)a0;
- (double)_timeViewScale;
- (long long)_backgroundedTimeViewEditModes;

@end

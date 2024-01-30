@class NTKAnalogHandsView, UIView;

@interface NTKAnalogFaceView : NTKFaceView

@property (retain, nonatomic) UIView *timeViewContainer;
@property (nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) BOOL _contentViewsOpaque;
@property (nonatomic, setter=_setTimeViewBehindContentView:) BOOL _timeViewBehindContentView;
@property (readonly, nonatomic) UIView *dialComplicationContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *timeView;

+ (Class)_timeViewClass;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (BOOL)_needsForegroundContainerView;
- (BOOL)_supportsTimeScrubbing;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureTimeView:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_createTimeViewIfNecessary;
- (void)_handleLocaleDidChange;
- (id)_timeTravelCaptionFontSizeOverrides;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (id)_complicationContainerViewForSlot:(id)a0;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (BOOL)_shouldRasterizeForegroundContainerViewForEditMode:(long long)a0;
- (BOOL)_canStartTimeScrubbing;
- (BOOL)_isAnalog;
- (double)_timeViewScale;
- (long long)_backgroundedTimeViewEditModes;

@end

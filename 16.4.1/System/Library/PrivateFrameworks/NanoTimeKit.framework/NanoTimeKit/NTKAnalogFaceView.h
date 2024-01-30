@class NTKAnalogHandsView, UIView;

@interface NTKAnalogFaceView : NTKFaceView

@property (retain, nonatomic) UIView *timeViewContainer;
@property (nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) BOOL _contentViewsOpaque;
@property (nonatomic, setter=_setTimeViewBehindContentView:) BOOL _timeViewBehindContentView;
@property (readonly, nonatomic) UIView *dialComplicationContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *timeView;

+ (Class)_timeViewClass;

- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (long long)_backgroundedTimeViewEditModes;
- (BOOL)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (id)_complicationContainerViewForSlot:(id)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_configureTimeView:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (void)_createTimeViewIfNecessary;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_handleLocaleDidChange;
- (BOOL)_isAnalog;
- (BOOL)_isComplicationSlotInsideDial:(id)a0;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldRasterizeForegroundContainerViewForEditMode:(long long)a0;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)_timeViewBehindContentForEditMode:(long long)a0;
- (double)_timeViewScale;
- (void)_unloadSnapshotContentViews;
- (void)_updateDateComplicationPositionIfNecessary;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;

@end

@class NTKDigitalTimeLabel;

@interface NTKDigitalFaceView : NTKFaceView

@property (readonly, nonatomic) NTKDigitalTimeLabel *timeView;
@property (nonatomic) long long viewMode;

- (void)layoutSubviews;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)setViewMode:(long long)a0 updateTimeViewStyle:(BOOL)a1;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)_timeLabelOptions;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (BOOL)_timeLabelUsesLegibility;
- (void)invalidateDigitalTimeLabelStyle;
- (void)_createTimeViewIfNecessary;

@end

@class NSArray, NSDictionary, NSMutableDictionary, UIView, UIMovieScrubberTrackOverlayView;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;

@interface UIMovieScrubberTrackView : UIView {
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskContainerView;
    struct CGSize { double width; double height; } _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct { unsigned char delegateSizeOriginDelta : 1; unsigned char delegateDidExpand : 1; unsigned char delegateDidCollapse : 1; unsigned char delegateWillRequestThumbs : 1; unsigned char delegateDidRequestThumbs : 1; unsigned char delegateZoomAnimationDuration : 1; unsigned char delegateZoomAnimationDelay : 1; unsigned char needsReload : 1; unsigned char editing : 1; unsigned int editingHandle; unsigned char zoomIsDisabled : 1; } _trackFlags;
}

@property (weak, nonatomic) id<UIMovieScrubberTrackViewDataSource> dataSource;
@property (weak, nonatomic) id<UIMovieScrubberTrackViewDelegate> delegate;

- (void)setEditing:(BOOL)a0;
- (void)reloadData;
- (void)unzoom;
- (void)clear;
- (BOOL)zoomAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setZoomAnimationDuration:(double)a0;
- (void)animateFillFramesAway;
- (void)layoutSubviews;
- (double)zoomAnimationDuration;
- (void)setThumbnailImage:(struct CGImage { } *)a0 forTimestamp:(id)a1;
- (void)_reallyReloadData;
- (id)_createImageViewForTimestamp:(id)a0 isSummaryThumbnail:(BOOL)a1;
- (void)_zoomAnimationDidFinish;
- (void)_unzoomAnimationDidFinish;
- (void)_setOverlayViewIsZoomed:(BOOL)a0 minValue:(float)a1 maxValue:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStartValue:(double)a0;
- (void)setValue:(double)a0;
- (void)setEndValue:(double)a0;

@end

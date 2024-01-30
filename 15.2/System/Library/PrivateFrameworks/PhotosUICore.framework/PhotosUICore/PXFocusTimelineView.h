@class UIImageView, UIImage, UIView, NSMutableArray, PXFocusTimelineEvent;
@protocol PXFocusTimelineViewDelegate;

@interface PXFocusTimelineView : UIView {
    NSMutableArray *_focusEvents;
    NSMutableArray *_animatableFocusEvents;
    UIImageView *_trackImageView;
    UIView *_focusEventsView;
    UIView *_progressView;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTrackingTime;
    PXFocusTimelineEvent *_objectTrackingEvent;
    BOOL _zoomed;
    double _zoomMinValue;
    double _zoomMaxValue;
}

@property (class, readonly, nonatomic) UIImage *autoFocusEventMarkerImage;
@property (class, readonly, nonatomic) UIImage *userInitiatedFocusEventMarkerImage;

@property (weak, nonatomic) id<PXFocusTimelineViewDelegate> delegate;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL skipLayoutUpdates;
@property (nonatomic) BOOL dimmed;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)unzoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)objectTrackingStartedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)objectTrackingFinishedWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrame;
- (void)updateObjectTrackingProgressAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldStop:(BOOL *)a1;
- (void)resetTimeline;
- (void)addFocusEvent:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 userInitiated:(BOOL)a1 shouldAnimate:(BOOL)a2;
- (void)updateTimeline;
- (void)setZoomMinValue:(double)a0 maxValue:(double)a1;
- (void)handleEventSelectedAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateTrack;
- (void)_addEventToTimeline:(id)a0 atIndex:(unsigned long long)a1;
- (id)_imageViewForFocusEvent:(id)a0;
- (void)_animateFocusChangeFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (void)_updateTrackingProgress;
- (struct CGPoint { double x0; double x1; })_trackPointFromTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGPoint { double x0; double x1; })_closestTickPointToPointOnTrack:(struct CGPoint { double x0; double x1; })a0;
- (id)_eventAtLocation:(struct CGPoint { double x0; double x1; })a0 threshold:(double)a1;
- (BOOL)_isEventWithinZoomRange:(id)a0;
- (BOOL)_isTickWithinActiveTrackRange:(double)a0;
- (double)_zoomAdjustedTickGap;

@end

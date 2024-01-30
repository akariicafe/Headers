@class UIImage, UIImageView;
@protocol PXSlowMotionEditorDelegate;

@interface PXSlowMotionEditor : UIView {
    UIImageView *_startHandleView;
    UIImageView *_endHandleView;
    UIImageView *_trackImageView;
    UIImageView *_trackSnapshotView;
    BOOL _draggingStart;
    BOOL _draggingEnd;
    double _touchOffset;
    BOOL _zoomed;
    BOOL _trackingZoom;
    struct CGPoint { double x; double y; } _touchLocationWhenTrackingZoomBegan;
    BOOL _forceLayout;
    double _zoomMinValue;
    double _zoomMaxValue;
}

@property (class, readonly, nonatomic) UIImage *handleImage;

@property (weak, nonatomic) id<PXSlowMotionEditorDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } trackInsets;
@property (nonatomic) double trimHandleWidth;
@property (nonatomic) unsigned long long regionEditorStyle;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double startValue;
@property (nonatomic) double endValue;
@property (nonatomic) double zoomDelay;
@property (nonatomic, getter=isZoomAnimating, setter=setZoomAnimating:) BOOL zoomAnimating;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startHandleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } endHandleFrame;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_trackScale;
- (void).cxx_destruct;
- (double)_zoomMinValue;
- (double)_zoomMaxValue;
- (double)_trimHandleWidth;
- (void)setStartValue:(double)a0 notify:(BOOL)a1;
- (void)_updateTrack;
- (void)setEndValue:(double)a0 notify:(BOOL)a1;
- (double)_valueFromStartHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_valueFromEndHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrameNoZoom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_handleFrameForValue:(double)a0 isStart:(BOOL)a1;
- (double)_valueFromHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isStart:(BOOL)a1;
- (BOOL)_isPoint:(struct CGPoint { double x0; double x1; })a0 inHandleIsStart:(BOOL)a1 outTouchOffset:(double *)a2;
- (void)handleBeginTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handleChangeTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handleEndTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateSlidersWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_beginTrackingZoomWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_cancelZoomTrackingIfNeccessaryWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_zoomPressWasHeld;
- (id)_trackImageForZoom:(BOOL)a0;
- (id)_trackColor;
- (id)_handleTintColor;
- (void)_drawCurveWithFlatEndsFromX:(double)a0 fromY:(double)a1 toX:(double)a2 toY:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrame;
- (void)setZoomMinValue:(double)a0 maxValue:(double)a1;
- (void)layoutSubviews;
- (BOOL)_isZoomed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_tickColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

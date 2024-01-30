@class TSDCanvasLayer, NSObject;
@protocol TSDCanvasZoomTrackerDelegate;

@interface TSDCanvasZoomTracker : NSObject {
    TSDCanvasLayer *mCanvasLayer;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mSavedTransform;
    struct CGPoint { double x; double y; } mZoomOrigin;
    BOOL mHasGestureOrigin;
    struct CGPoint { double x; double y; } mGestureOrigin;
    struct CGPoint { double x; double y; } mGestureOffset;
    struct CGPoint { double x; double y; } mSavedContentOffset;
    BOOL mIsZooming;
    unsigned long long mZoomVelocitySampleCount;
    double mZoomVelocity;
    double mZoomStartTime;
    BOOL mIsShowingZoomHUD;
}

@property (weak, nonatomic) NSObject<TSDCanvasZoomTrackerDelegate> *delegate;
@property (nonatomic) BOOL alwaysUsesTranslationSprings;
@property (nonatomic) BOOL snapsViewScale;
@property (nonatomic) BOOL animateTransform;

- (void).cxx_destruct;
- (id)initWithCanvasLayer:(id)a0;
- (void)p_finishZoomWithFinalScaleFactor:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)zoomWithScale:(double)a0 velocity:(double)a1 locationInView:(struct CGPoint { double x0; double x1; })a2 phase:(int)a3;

@end

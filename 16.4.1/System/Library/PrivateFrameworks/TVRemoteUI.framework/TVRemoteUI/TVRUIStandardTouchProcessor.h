@class TVRButtonHaptic, NSMutableSet, UIView;
@protocol _TVRUIEventDelegate;

@interface TVRUIStandardTouchProcessor : NSObject

@property (retain, nonatomic) UIView *touchpadView;
@property (weak, nonatomic) id<_TVRUIEventDelegate> eventDelegate;
@property (retain, nonatomic) TVRButtonHaptic *haptic;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } virtualBoundingBox;
@property (retain, nonatomic) UIView *debugView;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousTimestamp;
@property (retain, nonatomic) NSMutableSet *startingTouches;
@property (nonatomic) struct CGPoint { double x; double y; } startingPoint;
@property (nonatomic) long long startingSwipeDirection;
@property (retain, nonatomic) NSMutableSet *endedTouches;
@property (nonatomic) long long touchCnt;

- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)a0;
- (void)touchesEnded:(id)a0 touches:(id)a1 withEvent:(id)a2;
- (void)touchesBegan:(id)a0 touches:(id)a1 withEvent:(id)a2;
- (void)touchesMoved:(id)a0 touches:(id)a1 withEvent:(id)a2;
- (long long)_calculateDominantSwipeDirection:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateVirtualBoundingBox:(struct CGPoint { double x0; double x1; })a0 sizingRatio:(double)a1 swipeDirection:(long long)a2;
- (void)_cleanupOnTouchesEnded;
- (void)_configureGestureRecognizersOnView;
- (void)_endAndRestartTouchesManually:(id)a0;
- (void)_processTouches:(id)a0;
- (void)_sendSelectButtonPressBegan;
- (void)_sendSelectButtonPressEnded;
- (id)_touchEventForTouch:(id)a0;
- (struct CGPoint { double x0; double x1; })_virtualTouchLocationForTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTouchpadView:(id)a0;
- (void)touchesCancelled:(id)a0 touches:(id)a1 withEvent:(id)a2;

@end

@class AXPIFingerController;

@interface CACSpokenCommandGestureManager : NSObject {
    AXPIFingerController *_fingerController;
}

@property (readonly, nonatomic) AXPIFingerController *fingerController;
@property (nonatomic) BOOL didStartDrag;
@property (nonatomic) struct CGPoint { double x; double y; } startPointForDrag;
@property (nonatomic) BOOL shouldHoldStartPointForDrag;
@property (nonatomic) BOOL didStart3DTouch;
@property (nonatomic) struct CGPoint { double x; double y; } startPointFor3DTouch;
@property (readonly, nonatomic) BOOL isInDragGesture;
@property (readonly, nonatomic) BOOL isIn3DTouchGesture;
@property (readonly, nonatomic) BOOL isInGesture;
@property (nonatomic) struct CGPoint { double x; double y; } defaultPortraitUpPointForGestures;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)resetState;
- (void)performGesture:(id)a0;
- (void)performPinchOutGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performPinchInGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performRotateRightGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performRotateLeftGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)reveal3DTouchActions;
- (void)performSwipeGestureAtPoint:(struct CGPoint { double x0; double x1; })a0 inDirection:(long long)a1 fast:(BOOL)a2 numberOfFingers:(unsigned long long)a3;
- (void)performDoubleTapAtPoint:(struct CGPoint { double x0; double x1; })a0 numberOfFingers:(unsigned long long)a1;
- (void)performTapAtPoint:(struct CGPoint { double x0; double x1; })a0 numberOfFingers:(unsigned long long)a1;
- (void)startDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startHoldAndDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performLongPressAtPoint:(struct CGPoint { double x0; double x1; })a0 numberOfFingers:(unsigned long long)a1;
- (void)maximize3DTouch;
- (void)_performGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointForGestureGivenPortraitUpPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_pointForGestureGivenPortraitUpPoint:(struct CGPoint { double x0; double x1; })a0 shouldToggleSelectionOptions:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_fingerControllerPointForPortraitUpPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_startDragWithHold:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_clearStateFlags;
- (void)_adjust3DTouchToForce:(double)a0;
- (void)start3DTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end

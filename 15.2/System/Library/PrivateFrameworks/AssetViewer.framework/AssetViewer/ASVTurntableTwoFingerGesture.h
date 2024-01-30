@protocol ASVTurntableTwoFingerGestureDelegate;

@interface ASVTurntableTwoFingerGesture : ASVTwoFingerGesture

@property (weak, nonatomic) id<ASVTurntableTwoFingerGestureDelegate> turntableDelegate;

- (void).cxx_destruct;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2 turntableDelegate:(id)a3;
- (void)updatePanWithFirstTouchLocation:(id)a0 secondTouchLocation:(SEL)a1 midPoint:(void /* unknown type, empty encoding */)a2;

@end

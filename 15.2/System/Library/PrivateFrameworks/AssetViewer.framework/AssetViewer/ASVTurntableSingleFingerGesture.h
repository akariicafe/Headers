@protocol ASVTurntableSingleFingerGestureDelegate;

@interface ASVTurntableSingleFingerGesture : ASVSingleFingerGesture

@property (weak, nonatomic) id<ASVTurntableSingleFingerGestureDelegate> turntableDelegate;

- (void).cxx_destruct;
- (void)updateGesture;
- (void)finishGesture;
- (void)updatePan;
- (id)initWithTouch:(id)a0 dataSource:(id)a1 turntableDelegate:(id)a2 enabledGestureTypes:(unsigned long long)a3;

@end

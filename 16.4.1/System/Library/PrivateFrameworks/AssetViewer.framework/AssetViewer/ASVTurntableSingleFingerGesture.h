@protocol ASVTurntableSingleFingerGestureDelegate;

@interface ASVTurntableSingleFingerGesture : ASVSingleFingerGesture

@property (weak, nonatomic) id<ASVTurntableSingleFingerGestureDelegate> turntableDelegate;

- (void).cxx_destruct;
- (id)initWithTouch:(id)a0 dataSource:(id)a1 turntableDelegate:(id)a2 enabledGestureTypes:(unsigned long long)a3;
- (void)finishGesture;
- (void)updateGesture;
- (void)updatePan;

@end

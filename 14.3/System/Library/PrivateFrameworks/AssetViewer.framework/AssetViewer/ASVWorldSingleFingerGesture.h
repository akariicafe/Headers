@class ASVWorldGestureDragOffsetCorrector;
@protocol ASVWorldSingleFingerGestureDelegate;

@interface ASVWorldSingleFingerGesture : ASVSingleFingerGesture

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (weak, nonatomic) id<ASVWorldSingleFingerGestureDelegate> worldDelegate;

- (void).cxx_destruct;
- (id)initWithTouch:(id)a0 dataSource:(id)a1 worldDelegate:(id)a2 enabledGestureTypes:(unsigned long long)a3;
- (void)updateGesture;
- (void)finishGesture;
- (void)updateTranslation;
- (float)potentialAssetDistanceFromInitialLocationOnScreen;

@end

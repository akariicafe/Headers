@class UITextMagnifierTimeWeightedPoint, NSObject;
@protocol UICoordinateSpace;

@interface UITextGestureTuning : NSObject {
    struct CGPoint { double x; double y; } _caretDistance;
    double _initialOffsetFromTopOfCaret;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    long long _lastTouchType;
}

@property (weak, nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace;
@property (weak, nonatomic) NSObject<UICoordinateSpace> *gestureCoordinateSpace;
@property (nonatomic) BOOL shouldUseLineThreshold;
@property (nonatomic) BOOL shouldIncludeConstantOffset;
@property (nonatomic) BOOL includeTipProjection;
@property (nonatomic) BOOL strongerBiasAgainstUp;
@property (readonly, nonatomic) BOOL didBreakLineThreshold;
@property (readonly, nonatomic) double initialPosition;
@property (readonly, nonatomic) double lineBreakProgress;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithTouches:(id)a0 gestureState:(long long)a1;
- (void)assertInitialPositionFromTopOfCaret:(double)a0 distanceFromCaret:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })pointForGestureState:(long long)a0 point:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })pointIfPlacedCarefully:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })touchAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateVisibilityOffsetForGestureState:(long long)a0 touchType:(long long)a1 locationInSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a2 majorRadius:(double)a3;
- (void)updateWeightedPointWithGestureState:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1;

@end

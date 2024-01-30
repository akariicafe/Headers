@class UITouch, _UIGestureRecognizerTransformAnalyzer;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint { double x; double y; } _anchorSceneReferencePoint;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

@property (nonatomic) double rotation;
@property (readonly, nonatomic) double velocity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;

- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (double)_preRecognitionWeight;
- (void)_transformChangedWithEvent:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (void)_updateTransformAnalyzerWeights;
- (void)_setPostRecognitionWeight:(double)a0;
- (double)_postRecognitionWeight;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_setPreRecognitionWeight:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

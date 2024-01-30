@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
}

@property (readonly, nonatomic) long long dominantComponent;
@property (nonatomic) double translationWeight;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;

- (void)analyzeTouches:(id)a0;
- (id)init;
- (void)reset;

@end

@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject

@property (nonatomic, setter=_setTranslation:) struct CGPoint { double x; double y; } translation;
@property (nonatomic, setter=_setTranslationMagnitude:) double translationMagnitude;
@property (nonatomic, setter=_setAbsoluteTranslation:) struct CGPoint { double x; double y; } absoluteTranslation;
@property (nonatomic, setter=_setScale:) double scale;
@property (nonatomic, setter=_setRotation:) double rotation;

- (void)_reset;
- (id)description;

@end

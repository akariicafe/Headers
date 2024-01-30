@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {
    UIMotionEffectGroup *_group;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } slideMagnitude;
@property (nonatomic) double horizontalSlideAccelerationBoostFactor;
@property (nonatomic) double verticalSlideAccelerationBoostFactor;
@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (void)_updateGroupMotionEffect;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (void)_activateTiltEffectIfNecessary;
- (void)encodeWithCoder:(id)a0;

@end

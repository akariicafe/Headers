@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject

@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) CAAnimationGroup *_animationGroup;
@property (readonly, nonatomic) double _lastUpdateTime;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) float torchLevel;

- (id)initWithType:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAnimationGroup;
- (void)updateAtTime:(double)a0;
- (id)_blinkAnimationGroup;
- (id)_blinkAnimationWithBeginTime:(double)a0 duration:(double)a1 repeatCount:(long long)a2;
- (id)_doubleBlinkAnimationGroup;
- (id)_longPatternAnimationGroup;
- (id)_patternAnimationWithBeginTime:(double)a0 duration:(double)a1 repeatCount:(long long)a2;
- (id)_shortPatternAnimationGroup;

@end

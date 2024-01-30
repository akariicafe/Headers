@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject

@property (readonly, nonatomic) long long _type;
@property (readonly, nonatomic) CAAnimationGroup *_animationGroup;
@property (readonly, nonatomic) double _lastUpdateTime;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) float torchLevel;

- (id)init;
- (void)_updateAnimationGroup;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)_patternAnimationWithBeginTime:(double)a0 duration:(double)a1 repeatCount:(long long)a2;
- (id)_blinkAnimationWithBeginTime:(double)a0 duration:(double)a1 repeatCount:(long long)a2;
- (id)_shortPatternAnimationGroup;
- (id)_longPatternAnimationGroup;
- (id)_blinkAnimationGroup;
- (id)_doubleBlinkAnimationGroup;
- (void)updateAtTime:(double)a0;

@end

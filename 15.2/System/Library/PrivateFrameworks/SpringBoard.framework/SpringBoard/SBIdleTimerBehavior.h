@class NSString;

@interface SBIdleTimerBehavior : NSObject <SBFIdleTimerBehaviorProviding, BSDescriptionProviding>

@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)disabledBehavior;
+ (id)lockScreenBehavior;
+ (id)autoLockBehavior;
+ (id)behaviorForBehaviorProvider:(id)a0;
+ (id)behaviorWithDuration:(long long)a0 mode:(long long)a1 warnMode:(long long)a2;
+ (id)defaultBehavior;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)_initWithDuration:(long long)a0 mode:(long long)a1 warnMode:(long long)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithBehaviorProvider:(id)a0;

@end

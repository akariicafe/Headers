@class NSString;

@interface SBIdleTimerBehavior : NSObject <SBFIdleTimerBehaviorProviding, BSDescriptionProviding, BSDescriptionStreamable>

@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockScreenBehavior;
+ (id)disabledBehavior;
+ (id)behaviorWithDuration:(long long)a0 mode:(long long)a1 warnMode:(long long)a2;
+ (id)defaultBehavior;
+ (id)autoLockBehavior;
+ (id)behaviorForBehaviorProvider:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_appendInnerDescriptionToFormatter:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithDuration:(long long)a0 mode:(long long)a1 warnMode:(long long)a2;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithBehaviorProvider:(id)a0;

@end

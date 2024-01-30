@class NSString;

@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding>

@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) long long warnMode;
@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDuration:(long long)a0 warnMode:(long long)a1;

@end

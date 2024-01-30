@class NSString;

@interface CSBehavior : NSObject <BSDescriptionProviding, CSBehaviorProviding, SBFIdleTimerBehaviorProviding, NSCopying>

@property (nonatomic) long long idleTimerDuration;
@property (nonatomic) long long idleTimerMode;
@property (nonatomic) long long idleWarnMode;
@property (nonatomic) long long scrollingStrategy;
@property (nonatomic) long long notificationBehavior;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;

+ (id)behavior;
+ (id)behaviorForProvider:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)reset;
- (void)conformsToCSBehaviorProviding;
- (id)succinctDescription;
- (BOOL)areRestrictedCapabilities:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)addRestrictedCapabilities:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)unionBehavior:(id)a0;
- (void)removeRestrictedCapabilities:(unsigned long long)a0;
- (BOOL)isEqualToBehavior:(id)a0;

@end

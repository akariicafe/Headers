@class NSNumber;

@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration

@property (retain, nonatomic, getter=_boxed_minExpirationTimeout, setter=_setBoxed_minExpirationTimeout:) NSNumber *boxed_minExpirationTimeout;
@property (retain, nonatomic, getter=_boxed_maxExpirationTimeout, setter=_setBoxed_maxExpirationTimeout:) NSNumber *boxed_maxExpirationTimeout;
@property (readonly, nonatomic) unsigned long long idleEventMask;
@property (nonatomic) unsigned long long precedence;
@property (nonatomic) double minExpirationTimeout;
@property (readonly, nonatomic) BOOL hasMinExpirationTimeout;
@property (nonatomic) double maxExpirationTimeout;
@property (readonly, nonatomic) BOOL hasMaxExpirationTimeout;

+ (id)configurationWithIdleEventHandler:(id)a0;
+ (id)configurationWithMaximumExpirationTimeout:(double)a0;
+ (id)configurationWithMinimumExpirationTimeout:(double)a0 maximumExpirationTimeout:(double)a1;
+ (id)configurationWithMinimumExpirationTimeout:(double)a0;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_setIdleEventHandler:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;

@end

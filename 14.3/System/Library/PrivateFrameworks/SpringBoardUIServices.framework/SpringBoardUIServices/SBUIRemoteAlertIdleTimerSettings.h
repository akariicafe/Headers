@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double autoLockTimeout;
@property (nonatomic) BOOL disablesWarn;
@property (nonatomic) BOOL usesLockScreenRules;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

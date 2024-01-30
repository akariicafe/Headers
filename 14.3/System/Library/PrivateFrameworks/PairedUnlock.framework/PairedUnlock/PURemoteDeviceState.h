@class PURemotePasscodePolicy;

@interface PURemoteDeviceState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int version;
@property (nonatomic, getter=hasPasscodeSet) BOOL passcodeSet;
@property (nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;
@property (nonatomic, getter=isUnlockOnly) BOOL unlockOnly;
@property (nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;
@property (retain, nonatomic) PURemotePasscodePolicy *passcodePolicy;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

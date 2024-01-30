@class PURemotePasscodePolicy;

@interface PURemoteDeviceState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int version;
@property (nonatomic, getter=hasPasscodeSet) BOOL passcodeSet;
@property (nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;
@property (nonatomic, getter=isUnlockOnly) BOOL unlockOnly;
@property (nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;
@property (retain, nonatomic) PURemotePasscodePolicy *passcodePolicy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

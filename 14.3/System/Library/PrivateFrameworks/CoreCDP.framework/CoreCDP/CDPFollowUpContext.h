@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    unsigned long long _repairType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL force;

+ (id)contextWithType:(id)a0;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForStateRepair;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end

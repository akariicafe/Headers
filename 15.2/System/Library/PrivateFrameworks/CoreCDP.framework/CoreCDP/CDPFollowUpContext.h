@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    unsigned long long _repairType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL force;

+ (id)contextForStateRepair;
+ (id)contextForSecureTerms;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextForConfirmExistingSecret;
+ (id)contextWithType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

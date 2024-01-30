@class NSString, NSUUID;

@interface AACustodianRecoveryRequestContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL CLIMode;
@property (nonatomic, getter=isDataOnlyRecovery) BOOL dataOnlyRecovery;
@property (copy, nonatomic) NSString *recoverySessionID;
@property (copy, nonatomic) NSString *ownerAppleID;
@property (copy, nonatomic) NSString *recoveryCode;
@property (copy, nonatomic) NSUUID *custodianUUID;
@property (copy, nonatomic) NSString *custodianRecoveryToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

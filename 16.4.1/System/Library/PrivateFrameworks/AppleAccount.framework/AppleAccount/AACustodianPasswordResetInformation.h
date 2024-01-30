@class NSString;

@interface AACustodianPasswordResetInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (copy, nonatomic) NSString *ownerAppleID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRecoveryToken:(id)a0 ownerAppleID:(id)a1;

@end

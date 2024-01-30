@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aidaAlternateDSID;
@property (copy, nonatomic) NSString *aidaToken;
@property (copy, nonatomic) NSString *aaDSID;
@property (copy, nonatomic) NSString *aaAlternateDSID;
@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) BOOL isSandboxAccount;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *primaryEmailAddress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)aidaAccountAvailable;
- (id)primaryAppleAccountHash;
- (id)authorizationHeader;
- (void)encodeWithCoder:(id)a0;

@end

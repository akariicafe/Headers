@class NSString, ICUserIdentityProperties, ICUserIdentityStore, ACAccount, ACAccountStore;

@interface ICUserVerificationContext : NSObject <NSCopying>

@property (retain, nonatomic) ACAccount *ACAccount;
@property (retain, nonatomic) ACAccountStore *ACAccountStore;
@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (retain, nonatomic) ICUserIdentityStore *identityStore;
@property (nonatomic) long long verificationStyle;
@property (nonatomic) long long interactionLevel;
@property (copy, nonatomic) NSString *debugReason;

+ (id)contextWithACAccount:(id)a0 accountStore:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

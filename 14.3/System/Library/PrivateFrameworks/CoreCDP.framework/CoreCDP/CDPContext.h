@class KCAESGCMDuplexSession, NSString, CUMessageSession, AKCircleRequestContext, NSDictionary, NSNumber;
@protocol CDPAuthProviderInternal;

@interface CDPContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<CDPAuthProviderInternal> _authProvider;
@property (retain, nonatomic) KCAESGCMDuplexSession *duplexSession;
@property (retain, nonatomic) AKCircleRequestContext *resumeContext;
@property (retain, nonatomic) CUMessageSession *sharingChannel;
@property (nonatomic) BOOL _useSecureBackupCachedPassphrase;
@property (nonatomic) BOOL _alwaysCreateEscrowRecord;
@property (copy, nonatomic) NSString *_recoveryToken;
@property (nonatomic) BOOL _ignoreLockAssertErrors;
@property (nonatomic) BOOL idmsRecovery;
@property (nonatomic) BOOL idmsMasterKeyRecovery;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *passwordEquivToken;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL isHSA2Account;
@property (nonatomic) BOOL isFederatedAccount;
@property (nonatomic) BOOL didUseSMSVerification;
@property (copy, nonatomic) NSString *cachedLocalSecret;
@property (nonatomic) unsigned long long cachedLocalSecretType;
@property (nonatomic) BOOL guestMode;
@property (copy) NSString *findMyiPhoneUUID;
@property BOOL supportsSkipSignIn;

+ (id)preflightContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthenticationResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithAuthenticationResults:(id)a0;
- (BOOL)desiresAllRecords;
- (id)cliqueConfiguration;
- (void)augmentWithCredentialsFromContext:(id)a0;
- (void)purgeResumeData;

@end

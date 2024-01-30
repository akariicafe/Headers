@class NSData, NSString, NSUUID, CDPCustodianRecoveryInfo, KCAESGCMDuplexSession, NSDictionary, CDPCABackupRecoveryReporter, CUMessageSession, AKCircleRequestContext, NSNumber;
@protocol CDPAuthProviderInternal;

@interface CDPContext : NSObject <NSSecureCoding, NSCopying> {
    CDPCABackupRecoveryReporter *_analyticsReporter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<CDPAuthProviderInternal> _authProvider;
@property (retain, nonatomic) KCAESGCMDuplexSession *duplexSession;
@property (retain, nonatomic) AKCircleRequestContext *resumeContext;
@property (nonatomic) BOOL failSignInOnError;
@property (nonatomic) long long validEscrowDeviceCount;
@property (nonatomic) long long totalRecoveryAttempts;
@property (nonatomic) long long maxDeviceRecoveryAttempts;
@property (nonatomic) double newestEscrowRecordAge;
@property (readonly, nonatomic) CDPCABackupRecoveryReporter *analyticsReporter;
@property (nonatomic) unsigned int endpoint;
@property (nonatomic) unsigned int backupActivity;
@property (nonatomic) unsigned long long walrusStatus;
@property (nonatomic) BOOL _supportsCustodianRecovery;
@property (retain, nonatomic) CUMessageSession *sharingChannel;
@property (nonatomic) BOOL _forceReset;
@property (nonatomic) BOOL _disableAsyncSecureBackupEnrollment;
@property (nonatomic) BOOL _useSecureBackupCachedPassphrase;
@property (nonatomic) BOOL _alwaysCreateEscrowRecord;
@property (nonatomic) BOOL _skipEscrowFetches;
@property (copy, nonatomic) NSString *_recoveryToken;
@property (nonatomic) BOOL _ignoreLockAssertErrors;
@property (nonatomic) BOOL idmsRecovery;
@property (nonatomic) BOOL idmsMasterKeyRecovery;
@property (nonatomic) BOOL mandatesRecoveryKey;
@property (readonly, nonatomic) BOOL isPiggybackingRecovery;
@property (readonly, nonatomic) BOOL isTTSURecovery;
@property (nonatomic) long long type;
@property (nonatomic) BOOL cachedPassphraseMissing;
@property (retain, nonatomic) CDPCustodianRecoveryInfo *custodianRecoveryInfo;
@property (retain, nonatomic) NSData *beneficiaryWrappedKeyData;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *passwordEquivToken;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL isHSA2Account;
@property (nonatomic) BOOL isFederatedAccount;
@property (nonatomic) BOOL isBeneficiaryAccount;
@property (nonatomic) BOOL didUseSMSVerification;
@property (nonatomic) BOOL isAttemptingBackupRestore;
@property (copy, nonatomic) NSString *cachedLocalSecret;
@property (nonatomic) unsigned long long cachedLocalSecretType;
@property (nonatomic) BOOL guestMode;
@property (copy) NSString *findMyiPhoneUUID;
@property BOOL supportsSkipSignIn;
@property (copy, nonatomic) NSUUID *beneficiaryIdentifier;

+ (id)preflightContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthenticationResults:(id)a0;
- (void)purgeResumeData;
- (void)augmentWithCredentialsFromContext:(id)a0;
- (id)cliqueConfiguration;
- (BOOL)desiresAllRecords;
- (void)updateWithAuthenticationResults:(id)a0;

@end

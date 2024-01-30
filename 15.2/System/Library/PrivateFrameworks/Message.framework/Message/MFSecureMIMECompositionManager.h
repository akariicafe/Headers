@class NSLock, NSString, MFError, NSSet, MailAccount, NSMutableDictionary, NSMutableSet, NSObject;
@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

@interface MFSecureMIMECompositionManager : NSObject {
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity { } *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity { } *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    BOOL _invalidated;
    id<MFSecureMIMECompositionManagerDelegate> _delegate;
}

@property (weak) id<MFSecureMIMECompositionManagerDelegate> delegate;
@property (copy) NSString *sendingAddress;
@property (readonly) MailAccount *sendingAccount;
@property (readonly) int signingPolicy;
@property (readonly) int encryptionPolicy;
@property (readonly) int signingStatus;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;

+ (struct __SecIdentity { } *)copySigningIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (struct __SecIdentity { } *)copyEncryptionIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (unsigned int)evaluateTrustForSigningCertificate:(struct __SecCertificate { } *)a0 sendingAddress:(id)a1;
+ (id)copyEncryptionCertificatesForAccount:(id)a0 recipientAddresses:(id)a1 errorsByAddress:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (void)addRecipients:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)removeRecipients:(id)a0;
- (id)compositionSpecification;
- (id)initWithSendingAccount:(id)a0 signingPolicy:(int)a1 encryptionPolicy:(int)a2;
- (BOOL)_updateSigningStatus_nts;
- (BOOL)_updateEncryptionStatus_nts;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)a0 certsByRecipient:(id)a1 errorsByRecipient:(id)a2 identity:(struct __SecIdentity { } *)a3 error:(id)a4;
- (void)_determineEncryptionStatusWithNewRecipients:(id)a0;
- (void)_notifyDelegateSigningStatusDidChange:(int)a0 identity:(struct __SecIdentity { } *)a1 error:(id)a2;
- (void)_determineIdentitiesWithSendingAddress:(id)a0 forSigning:(BOOL)a1 encryption:(BOOL)a2;
- (void)_determineSigningStatusWithSendingAddress:(id)a0;
- (void)_determineEncryptionStatusWithSendingAddress:(id)a0;
- (void)_nts_setSigningIdentity:(struct __SecIdentity { } *)a0 error:(id)a1;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity { } *)a0 error:(id)a1;
- (void)_nts_copySigningIdentity:(struct __SecIdentity **)a0 error:(id *)a1;
- (void)_determineTrustStatusForSigningIdentity:(struct __SecIdentity { } *)a0 sendingAddress:(id)a1;
- (void)_nts_copyEncryptionIdentity:(struct __SecIdentity **)a0 error:(id *)a1 certificatesByRecipient:(id *)a2 errorsByRecipient:(id *)a3;
- (BOOL)_shouldAllowSend_nts;
- (BOOL)_shouldSign_nts;
- (BOOL)_shouldEncrypt_nts;
- (id)initWithSigningPolicy:(int)a0 encryptionPolicy:(int)a1;
- (BOOL)shouldAllowSend;

@end

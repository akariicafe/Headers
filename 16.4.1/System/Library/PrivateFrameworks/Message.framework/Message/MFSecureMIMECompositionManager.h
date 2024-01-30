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

+ (id)copyEncryptionCertificatesForAccount:(id)a0 recipientAddresses:(id)a1 errorsByAddress:(id *)a2;
+ (struct __SecIdentity { } *)copyEncryptionIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (struct __SecIdentity { } *)copySigningIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (unsigned int)evaluateTrustForSigningCertificate:(struct __SecCertificate { } *)a0 sendingAddress:(id)a1;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addRecipients:(id)a0;
- (BOOL)shouldAllowSend;
- (id)compositionSpecification;
- (id)initWithSendingAccount:(id)a0 signingPolicy:(int)a1 encryptionPolicy:(int)a2;
- (id)initWithSigningPolicy:(int)a0 encryptionPolicy:(int)a1;
- (void)removeRecipients:(id)a0;

@end

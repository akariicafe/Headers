@class HMFTimer, NSString, NSData, NSMutableData, NSObject;
@protocol OS_dispatch_queue, HAPPairSetupSessionDelegate;

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate, HAPEncryptedSession>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMFTimer *backoffTimer;
@property (nonatomic, getter=isHandlingInvalidSetupCode) BOOL handlingInvalidSetupCode;
@property (nonatomic) unsigned long long pairSetupType;
@property (retain, nonatomic) NSData *sessionReadKey;
@property (retain, nonatomic) NSData *sessionWriteKey;
@property (retain, nonatomic) NSMutableData *sessionReadNonce;
@property (retain, nonatomic) NSMutableData *sessionWriteNonce;
@property (retain, nonatomic) NSData *certificate;
@property (readonly, nonatomic) struct PairingSessionPrivate { } *pairingSession;
@property (readonly, weak) id<HAPPairSetupSessionDelegate> delegate;
@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isValidSetupCode:(id)a0;

- (void)timerDidFire:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (void)_invalidate;
- (void)_initializeServer;
- (void)stopWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_stopWithError:(id)a0;
- (id)encryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)decryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)a0;
- (void)receivedSetupExchangeData:(id)a0 error:(id)a1;
- (void)_processSetupExchangeData:(id)a0 error:(id)a1;
- (id)initWithRole:(long long)a0 pairSetupType:(unsigned long long)a1 delegate:(id)a2;
- (BOOL)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_handlePairSetupExchangeComplete;
- (void)handleSetupCodeRequest;
- (void)_processSetupCode:(id)a0 error:(id)a1;
- (void)handleInvalidSetupCodeAndRestart:(BOOL)a0;
- (void)handleBackoffRequestWithTimeout:(double)a0;
- (void)_handleBackoffExpiration;
- (BOOL)handleSavePeerRequestWithPeerIdentity:(id)a0 error:(id *)a1;
- (id)_showSetupCodeWithError:(id *)a0;
- (void)_handleProductData:(id)a0;
- (void)generateSessionKeys;
- (id)getCertificate;
- (BOOL)isSecureSession;

@end

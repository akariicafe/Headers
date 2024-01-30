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

- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)_invalidate;
- (void)start;
- (void)stopWithError:(id)a0;
- (void)_stopWithError:(id)a0;
- (id)getCertificate;
- (void)receivedSetupExchangeData:(id)a0 error:(id)a1;
- (id)encryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)decryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (void)_processSetupExchangeData:(id)a0 error:(id)a1;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)a0;
- (id)initWithRole:(long long)a0 pairSetupType:(unsigned long long)a1 delegate:(id)a2;
- (void)generateSessionKeys;
- (BOOL)isSecureSession;
- (BOOL)_initializeSession;
- (void)_handlePairSetupExchangeComplete;
- (void)_processSetupCode:(id)a0 error:(id)a1;
- (void)handleInvalidSetupCodeAndRestart:(BOOL)a0;
- (void)handleSetupCodeRequest;
- (void)_initiateClientPairSetupExchange;
- (void)_initializeServer;
- (void)_handleBackoffExpiration;
- (void)handleBackoffRequestWithTimeout:(double)a0;
- (BOOL)handleSavePeerRequestWithPeerIdentity:(id)a0 error:(id *)a1;
- (id)_showSetupCodeWithError:(id *)a0;
- (void)_handleProductData:(id)a0;

@end

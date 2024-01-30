@class NSString, NSDictionary, NSData, HAPSecuritySessionEncryption, NSObject;
@protocol OS_dispatch_queue, HMFLocking, HAPSecuritySessionDelegate;

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession> {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long state;
@property (nonatomic) struct PairingSessionPrivate { } *pairingSession;
@property (retain, nonatomic) HAPSecuritySessionEncryption *encryption;
@property (readonly, weak) id<HAPSecuritySessionDelegate> delegate;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, getter=isOpen) BOOL open;
@property (readonly, getter=isOpening) BOOL opening;
@property (readonly, nonatomic) unsigned long long resumeSessionID;
@property (readonly) NSData *broadcastKey;
@property (readonly) NSDictionary *additionalDerivedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)closeWithError:(id)a0;
- (void)close;
- (void)open;
- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_inputInfo;
- (void)setBroadcastKey:(id)a0;
- (id)encryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)decryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)initWithRole:(unsigned long long)a0 resumeSessionID:(unsigned long long)a1 delegate:(id)a2;
- (void)setAdditionalDerivedKeys:(id)a0;
- (void)setResumeSessionID:(unsigned long long)a0;
- (BOOL)_initializeSetupSession:(unsigned long long)a0;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)a0;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)a0 status:(int *)a1;
- (void)_initiateClientSessionSetupExchange;
- (void)receivedSetupExchangeData:(id)a0 error:(id)a1;
- (void)_processSetupExchangeData:(id)a0 error:(id)a1;
- (id)_outputInfo;
- (id)_broadcastInfo;
- (void)_handleSetupExchangeComplete;
- (void)reallyOpen;
- (void)_notifyOpening;
- (void)_notifyOpened;

@end

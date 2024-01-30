@class HAPPairSetupSession, HAPAuthSession, NSString, NSError, HAPAccessoryProtocolInfo;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport;

@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPAuthSessionDelegate> {
    BOOL _sendPDUHeader;
}

@property (readonly, nonatomic) id<HAP2AccessoryServerSecureTransport> transport;
@property (readonly, nonatomic) id<HAP2AccessoryServerEncoding> encoding;
@property (retain, nonatomic) HAPPairSetupSession *pairingSession;
@property (retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo;
@property (retain, nonatomic) NSError *cancelError;
@property (retain, nonatomic) HAPAuthSession *authSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doSoftwareAuth;

- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)authSession:(id)a0 validateUUID:(id)a1 token:(id)a2;
- (void)_handleAuthCompleteWithError:(id)a0;
- (BOOL)_isProtocolInfoValid:(id)a0;
- (void)_sendSoftwareAuthMessageWithData:(id)a0 completion:(id /* block */)a1;
- (void)_softwareAuthFinished;
- (void)_startSoftwareAuth;
- (void)_validateAccessoryInfoWithCompletion:(id /* block */)a0;
- (void)authSession:(id)a0 authComplete:(id)a1;
- (void)authSession:(id)a0 authenticateUUID:(id)a1 token:(id)a2;
- (void)authSession:(id)a0 confirmUUID:(id)a1 token:(id)a2;
- (void)authSession:(id)a0 sendAuthExchangeData:(id)a1;
- (void)runForPairingDriver:(id)a0;

@end

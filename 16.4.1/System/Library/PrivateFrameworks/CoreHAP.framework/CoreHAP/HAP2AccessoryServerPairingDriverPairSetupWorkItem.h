@class NSError, NSString, HAPPairSetupSession;
@protocol HAP2AccessoryServerTransport, HAP2AccessoryServerPairingDriverDelegate;

@interface HAP2AccessoryServerPairingDriverPairSetupWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPPairSetupSessionClientDelegate>

@property (readonly, weak, nonatomic) id<HAP2AccessoryServerPairingDriverDelegate> delegate;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransport> transport;
@property (retain, nonatomic) HAPPairSetupSession *pairingSession;
@property (readonly, nonatomic) unsigned long long pairSetupType;
@property (nonatomic, getter=isInvalidSetupCode) BOOL invalidSetupCode;
@property (nonatomic) double backoffInterval;
@property (retain, nonatomic) NSError *cancelError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pairSetupWithType:(unsigned long long)a0;

- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)_pairingStoppedWithError:(id)a0;
- (void)_resetPairingState;
- (id)initWithPairSetupType:(unsigned long long)a0;
- (BOOL)pairSetupSession:(id)a0 didPairWithPeer:(id)a1 error:(id *)a2;
- (BOOL)pairSetupSession:(id)a0 didReceiveBackoffRequestWithTimeInterval:(double)a1;
- (id)pairSetupSession:(id)a0 didReceiveLocalPairingIdentityRequestWithError:(id *)a1;
- (void)pairSetupSession:(id)a0 didReceiveProductData:(id)a1;
- (void)pairSetupSession:(id)a0 didReceiveSetupCodeRequestWithCompletionHandler:(id /* block */)a1;
- (void)pairSetupSession:(id)a0 didReceiveSetupExchangeData:(id)a1;
- (void)pairSetupSession:(id)a0 didStopWithError:(id)a1;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)a0;
- (void)pairSetupSessionDidStart:(id)a0;
- (void)runForPairingDriver:(id)a0;

@end

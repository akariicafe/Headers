@class NSMutableDictionary, NSTimer, BKSProcessAssertion, NSString, IDSService;

@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) NSTimer *transportReachabilityTimer;
@property (retain, nonatomic) NSMutableDictionary *inflightMessages;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (retain, nonatomic) BKSProcessAssertion *suspendAssertion;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) BOOL shouldSuppressTransportReachabilityTimeout;
@property (nonatomic, setter=setTinkerPairing:) BOOL isTinkerPairing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (id)serviceIdentifier;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 linkedDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_sendProtoBuf:(id)a0 service:(id)a1 priority:(long long)a2 responseIdentifier:(id)a3 expectsResponse:(BOOL)a4;
- (id)sendProtoBuf:(id)a0 service:(id)a1 priority:(long long)a2 responseIdentifier:(id)a3 expectsResponse:(BOOL)a4 retryCount:(long long)a5 retryInterval:(double)a6;
- (void)endSetupTransaction;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)setupServiceMessageSelectorMappings;
- (id)customDescriptionOfMessageType:(unsigned short)a0;
- (void)clearPowerAssertionIfNotPairing:(id)a0;
- (void)startReachabilityTimer;
- (void)cancelReachabilityTimer;
- (void)checkReachability;
- (BOOL)connectionStateWithDevices:(id)a0 accounts:(id)a1;
- (BOOL)reportConnectionForService:(id)a0 accounts:(id)a1 devices:(id)a2;
- (void)updateConnectivityTimer:(BOOL)a0;
- (void)beginSetupTransaction;
- (void)resetTransportReachabilityTimer;

@end

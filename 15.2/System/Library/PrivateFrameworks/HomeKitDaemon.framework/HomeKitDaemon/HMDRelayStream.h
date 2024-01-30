@class NSMutableArray, NSString, HMDRelayManager, NSData, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit>

@property (readonly, copy, nonatomic) NSString *controllerIdentifier;
@property (retain, nonatomic) IDSService *idsService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isOpened) BOOL opened;
@property (readonly, nonatomic) NSMutableArray *pendingSentMessageIdentifiers;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, weak, nonatomic) HMDRelayManager *relayManger;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSData *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)writeData:(id)a0 error:(id *)a1;
- (unsigned long long)mtu;
- (void)close;
- (id)logIdentifier;
- (void)open;
- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingAccessoryData:(id)a2 fromAccessoryID:(id)a3 context:(id)a4;
- (void)suspend;
- (void)resume;
- (void)relayManager:(id)a0 didUpdateControllerIdentifier:(id)a1;
- (id)initWithRelayManager:(id)a0 idsService:(id)a1 accessoryIdentifier:(id)a2 accessToken:(id)a3;

@end

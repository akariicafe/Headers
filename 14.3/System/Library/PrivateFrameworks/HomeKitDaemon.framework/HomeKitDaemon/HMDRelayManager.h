@class NSHashTable, NSString, NSURLSession, IDSService, NSMutableArray, NSObject, HMFNetMonitor, HMDHome;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDRelayManager : HMFObject <HMFNetMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate, HMFLogging> {
    id<HMFLocking> _lock;
}

@property (copy, nonatomic) NSString *controllerIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) IDSService *idsService;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSHashTable *relayAccessories;
@property (readonly, nonatomic) NSMutableArray *relayStreams;
@property (nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) HMFNetMonitor *networkMonitor;
@property (weak, nonatomic) HMDHome *home;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)removeDelegate:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingAccessoryData:(id)a2 fromAccessoryID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingAccessoryReportMessage:(id)a2 controllerID:(id)a3 accessoryID:(id)a4 context:(id)a5;
- (id)logIdentifier;
- (void)_updateCurrentState;
- (void)addRelayAccessory:(id)a0;
- (void)removeRelayAccessory:(id)a0;
- (void)addUserToRelayAccessories:(id)a0 consentTokens:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)startAccessories:(id)a0;
- (void)accessory:(id)a0 didUpdateEnabledState:(BOOL)a1;
- (void)accessoryDidActivate:(id)a0;
- (void)accessoryDidPair:(id)a0;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)_handleRelayManagerUnsupported;
- (void)_handleRelayManagerEnabling;
- (void)_handleRelayManagerEnabled;
- (void)_handleRelayManagerDisabled;
- (void)_updateControllerIdentifier;
- (void)_setupRelayForAccessory:(id)a0;
- (void)_handleAccessoryEnabled:(id)a0;
- (void)requestPairingWithRelayAccessories:(id)a0;
- (void)_disableRelayForAccessory:(id)a0;
- (void)_tearDownRelayForAccessory:(id)a0;
- (void)_handleNotifyingDelegatesOfControllerIdentifierUpdate:(id)a0;
- (void)_requestPairingWithAccessories:(id)a0;
- (void)_requestConsentTokensForAccessoryIdentifiers:(id)a0 administratorIdentifier:(id)a1;
- (id)_consentTokenForConsentTokenAttributes:(id)a0 matchedAccessory:(id *)a1 error:(id *)a2;
- (void)_accessTokensForConsentTokens:(id)a0 user:(id)a1 completionHandler:(id /* block */)a2;
- (id)_accessTokenForAccessTokenAttributes:(id)a0 consentTokens:(id)a1 matchedConsentToken:(id *)a2 error:(id *)a3;
- (BOOL)_enableRelayForAccessory:(id)a0;
- (void)_activateAccessory:(id)a0;
- (void)_pairAccessory:(id)a0;
- (id)_relayStreamForAccessory:(id)a0;
- (void)_sendAccessoryReport:(id)a0 reportIdentifier:(id)a1;
- (void)__resumeAllStreams;
- (void)__suspendAllStreams;
- (void)_requestUserReportAccessory:(id)a0 reportIdentifier:(id)a1;

@end

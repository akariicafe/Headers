@class NSString, HMDAccessory, NSObject, HMDRelayManager;
@protocol OS_dispatch_queue;

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak, nonatomic) HMDRelayManager *relayManager;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)accessoryBagURL;

- (void)close;
- (id)logIdentifier;
- (void)open;
- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (void)relayManager:(id)a0 didUpdateControllerIdentifier:(id)a1;
- (id)initWithRelayManager:(id)a0 accessory:(id)a1;
- (id)accessoryBagURL;
- (void)requestControllerIdentifier;
- (void)requestAccessTokenForAccessoryIdentifier:(id)a0 pairingToken:(id)a1;

@end

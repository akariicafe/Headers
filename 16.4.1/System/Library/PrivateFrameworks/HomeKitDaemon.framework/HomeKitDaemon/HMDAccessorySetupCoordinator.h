@class NSUUID, HMFMessageDispatcher, HMMTRAccessoryServerBrowser, NSMutableDictionary, NSString, NSObject, HMDCHIPDataSource;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser;
@property (readonly) HMDCHIPDataSource *chipDataSource;
@property (readonly) NSMutableDictionary *stagingRequestsByUUID;
@property (copy) id /* block */ urlStringCHIPAccessorySetupPayloadFactory;
@property (copy) id /* block */ decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
@property (copy) id /* block */ payloadCHIPAccessorySetupPayloadFactory;
@property (copy) NSString *currentBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)a0 error:(id *)a1;
- (void)_handleStagedPairingDeviceCredential:(id)a0 completionHandler:(id /* block */)a1 forRequest:(id)a2 activity:(id)a3;
- (void)_handleStagedPairingServer:(id)a0 error:(id)a1 forRequest:(id)a2 activity:(id)a3;
- (void)_handleStagedPairingThreadNetworkScanResults:(id)a0 completionHandler:(id /* block */)a1 forRequest:(id)a2 activity:(id)a3;
- (void)_handleStagedPairingWiFiNetworkScanResults:(id)a0 completionHandler:(id /* block */)a1 forRequest:(id)a2 activity:(id)a3;
- (id)_setupPayloadWithCHIPSetupPayload:(id)a0 setupPayloadURL:(id)a1;
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)a0 error:(id *)a1;
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)a0;
- (void)handleConfirmDeviceCredentialMessage:(id)a0;
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)a0;
- (void)handleCreateCHIPSetupPayloadMessage:(id)a0;
- (void)handleRejectDeviceCredentialMessage:(id)a0;
- (void)handleSelectThreadNetworkAssociationMessage:(id)a0;
- (void)handleSelectWiFiNetworkAssociationMessage:(id)a0;
- (void)handleStageCHIPAccessoryPairingInStepsMessage:(id)a0;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 chipAccessoryServerBrowser:(id)a2 chipDataSource:(id)a3;

@end

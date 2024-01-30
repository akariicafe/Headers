@class CHIPAccessoryServerBrowser, HMFMessageDispatcher, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) CHIPAccessoryServerBrowser *chipAccessoryServerBrowser;
@property (copy) id /* block */ urlStringCHIPAccessorySetupPayloadFactory;
@property (copy) id /* block */ decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
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
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 chipAccessoryServerBrowser:(id)a2;
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)a0;
- (void)handleStageCHIPAccessoryPairingMessage:(id)a0;
- (void)handleCreateCHIPSetupCodeMessage:(id)a0;
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)a0;
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)a0 error:(id *)a1;
- (id)_setupPayloadWithCHIPSetupPayload:(id)a0 setupPayloadURL:(id)a1;
- (id)_hmCHIPSetupPayloadForCHIPSetupPayload:(id)a0;
- (id)_chipSetupPayloadForHMCHIPSetupPayload:(id)a0;

@end

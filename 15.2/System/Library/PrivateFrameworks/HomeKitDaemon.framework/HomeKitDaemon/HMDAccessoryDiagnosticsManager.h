@class HMDService, NSString, HMDHAPAccessory, HMDAccessoryDiagnosticsSettings, HMDAccessoryDiagnosticsSession, NSUUID, HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsManager : HMFObject <HMDNetworkRouterFirewallRuleManagerClient, HMFLogging, HMFMessageReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDService *diagnosticsService;
@property (retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings;
@property (retain) HMDAccessoryDiagnosticsSession *currentDiagnosticsSession;
@property (readonly) NSString *clientIdentifier;
@property BOOL didShutDown;
@property BOOL cloudFetchInProgress;
@property BOOL cloudFetchCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)shutDown;
- (void)_start;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_shutDown;
- (void)handleAccessoryConnectedNotification:(id)a0;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)a0;
- (id)initWithAccessory:(id)a0 service:(id)a1 msgDispatcher:(id)a2 workQueue:(id)a3;
- (void)handleCharacteristicsUpdatedNotification:(id)a0;
- (void)handleCharacteristicValueUpdatedNotification:(id)a0;
- (void)_handleDiagnosticsTransferRequest:(id)a0;
- (void)_registerForMessagesAndNotifications;
- (void)_updateDiagnosticSettings;
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdated;
- (BOOL)_isRequestSupported:(id)a0;
- (void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(id /* block */)a0;
- (void)_handleDiagnosticsTransferRequestWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(BOOL)a0 completion:(id /* block */)a1;
- (void)_clearCurrentDiagnosticsSession:(id)a0;
- (void)_fetchModelDiagnosticsMetadataForAccessory:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchCloudDiagnosticsMetadata;
- (void)_invalidateCloudDiagnosticsMetadata;
- (void)__fetchCloudDiagnosticsMetadataForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_callCompletionHandler:(id /* block */)a0 diagnostics:(id)a1 error:(id)a2;

@end

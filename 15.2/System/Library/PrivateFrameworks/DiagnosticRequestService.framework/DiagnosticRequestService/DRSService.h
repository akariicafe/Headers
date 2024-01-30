@class DRSTaskingManager, NSMutableDictionary, DRSDampeningManager, DRSCloudKitHelper, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_semaphore;

@interface DRSService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *postReceiptWorkQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *serviceConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) NSMutableDictionary *connectionToState;
@property (readonly, nonatomic) NSPersistentContainer *serviceContainer;
@property (readonly, nonatomic) DRSDampeningManager *dampeningManager;
@property (readonly, nonatomic) DRSTaskingManager *taskingManager;
@property (readonly, nonatomic) DRSCloudKitHelper *ckHelper;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned long long maxSingleSessionUploadSizeInBytes;
@property (readonly, nonatomic) unsigned long long weeklyUploadQuotaBytes;

+ (id)sharedInstance;
+ (id)fileDirectory;
+ (unsigned long long)uploadSessionUploadCapBytes;
+ (BOOL)serviceIsEnabled;
+ (id)databaseDirectory;

- (void)_handleEnableLogGatheringRequest:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_configureUploadXPCActivity;
- (BOOL)_saveDampeningManager;
- (void)_handleDampeningConfigurationDictMessage:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_runReportingSessionWithTransaction:(id)a0 xpcActivity:(id)a1;
- (void)_waitForDeviceUnlockAndInitializeServiceState;
- (void)_handleInjectEnableLogGatheringRequestResult:(id)a0 state:(id)a1;
- (void)_configureXPCActivities;
- (unsigned long long)_remainingSessionUploadQuotaBytesWithContext:(id)a0;
- (void)_handleRequestCleanTrigger:(id)a0 state:(id)a1;
- (void)_handleDampeningConfigurationReset:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_runCloudKitUploadWorkSessionWithTransaction:(id)a0 xpcActivity:(id)a1;
- (void)_handleCKWorkTriggerRequest:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_sendAdminRequestReply:(BOOL)a0 rejectionReason:(const char *)a1 requestMessage:(id)a2;
- (void)_ckQueueDownstreamOnly_uploadInFlightWithTransaction:(id)a0 xpcActivity:(id)a1;
- (void)_postReceiptProcessingWork:(id)a0 wasAccepted:(BOOL)a1;
- (BOOL)_connectionHasEntitlement:(id)a0;
- (void)_finishReportingStatsSessionWithActivity:(id)a0 withState:(long long)a1 transaction:(id)a2 endResultString:(id)a3;
- (unsigned long long)_remainingWeekUploadQuotaBytesWithContext:(id)a0;
- (BOOL)_persistEnableLogGatheringResult:(id)a0 workingContext:(id)a1;
- (id)_cachedMatchingQuery:(id)a0 workingContext:(id)a1;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0 state:(id)a1;
- (id)init;
- (BOOL)activateService;
- (void)deactivateService;
- (void)_sendRejectionMessage:(id)a0 rejectionReason:(unsigned long long)a1 state:(id)a2;
- (void)_handleDRSRequestMessage:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_handleNewEntitledConnection:(id)a0 state:(id)a1;
- (void)_configureReportStatsXPCActivity;
- (void)dealloc;
- (BOOL)_enableDataGatheringQueryPassesRandomRejection;
- (void)_addRequestToDAFileList:(id)a0;
- (void)_ckQueueOnly_submitOutstandingEnableDataGatheringQueriesWithTransaction:(id)a0 xpcActivity:(id)a1 followupWorkBlock:(id /* block */)a2;
- (void)_sendCurrentConfigurationToConnection:(id)a0;
- (void)_handleDampeningConfigurationGlobalEnablementMessage:(id)a0 state:(id)a1 transaction:(id)a2;
- (void)_rejectInjectRequest:(id)a0 state:(id)a1 reason:(const char *)a2;
- (void)_finishUploadSessionWithActivity:(id)a0 withState:(long long)a1 transaction:(id)a2 endResultString:(id)a3;
- (double)_resolvedEnableDataGatheringQueryAcceptanceRate;

@end

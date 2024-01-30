@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableSet, NSObject, CKDServerConfiguration;
@protocol OS_dispatch_queue;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>

@property (readonly, nonatomic) NSOperationQueue *configurationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration;
@property (readonly, nonatomic) NSMutableSet *globalConfigurationOps;
@property (readonly, nonatomic) NSOperationQueue *containerSpecificInfoQueue;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfos;
@property (readonly, nonatomic) NSMutableDictionary *containerSpecificInfoOperations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, nonatomic) int iCloudEnvNotifToken;
@property BOOL shouldDropAllConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)CKStatusReportArray;
- (void)_reallyDropAllConfigurations;
- (void)_fetchGlobalConfigForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_uniqueStringForContainer:(id)a0;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)_fetchContainerSpecificInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_writeOutiCloudAppSiteAssociationData:(id)a0;
- (void)wipeAllConfigurations;
- (void)dealloc;
- (id)init;
- (void)configurationForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)expireGlobalConfiguration;
- (void)expireConfigurationForContainer:(id)a0;
- (id)lastKnownServerConfiguration;
- (void).cxx_destruct;
- (void)containerServerInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;

@end

@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableSet, NSObject, CKDServerConfiguration;
@protocol OS_dispatch_queue;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>

@property (retain, nonatomic) NSOperationQueue *configurationQueue;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration;
@property (retain, nonatomic) NSMutableSet *globalConfigurationOps;
@property (retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfos;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) int iCloudEnvNotifToken;
@property (nonatomic) BOOL shouldDropAllConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)_behaviorOptionsChanged:(id)a0;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)dealloc;
- (void)_dropAllConfigurations;
- (void)_fetchContainerSpecificInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_reallyDropAllConfigurations;
- (void)_fetchGlobalConfigForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)containerInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_writeOutiCloudHostnames:(id)a0;
- (void)expireConfigurationForContextInfoProvider:(id)a0 accountInfoProvider:(id)a1;
- (void)expireGlobalConfiguration;
- (void)configurationForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_uniqueStringForContext:(id)a0 account:(id)a1;

@end

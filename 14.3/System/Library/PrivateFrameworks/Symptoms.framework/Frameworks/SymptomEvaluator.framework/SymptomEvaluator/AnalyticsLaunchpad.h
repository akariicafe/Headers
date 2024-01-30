@class NSString, NSMutableDictionary, AWDAgent, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)launchHealthCheck:(id)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)appendLaunchTime;
+ (void)clearIntegrityCheckBreadcrumb;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (id)configureClass:(id)a0;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;

- (id)init;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)integrityCheckStarted;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)_launchSequence:(id)a0;
- (void)launchSequence;

@end

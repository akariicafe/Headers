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
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)appendLaunchTime;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (BOOL)launchHealthCheck:(id)a0;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)clearIntegrityCheckBreadcrumb;
+ (id)configureClass:(id)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)leaveBreadcrumbForIntegrityCheck;

- (int)configureInstance:(id)a0;
- (void)integrityCheckStarted;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)_launchSequence:(id)a0;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)launchSequence;
- (id)init;
- (void)destroyPersistentStoreStarted;
- (void).cxx_destruct;

@end

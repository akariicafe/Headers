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
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (id)configureClass:(id)a0;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (BOOL)launchHealthCheck:(id)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)appendLaunchTime;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)leaveBreadcrumbForIntegrityCheck;

- (int)configureInstance:(id)a0;
- (void)launchSequence;
- (void).cxx_destruct;
- (id)init;
- (void)integrityCheckStarted;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreStarted;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)_launchSequence:(id)a0;

@end

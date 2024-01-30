@class TRILogger, NSString, _PASLock, TRITrackingId, TRIFactorsState, NSObject, TRIDefaultFactorProvider;
@protocol OS_dispatch_queue, TRIPaths;

@interface TRIClient : NSObject <TRIFactorProviding> {
    id<TRIPaths> _paths;
    TRIDefaultFactorProvider *_defaultFactorProvider;
    int _projectId;
    double _staleFactorsUsageGracePeriod;
    _PASLock *_lock;
    struct atomic_flag { _Atomic BOOL _Value; } _isLazyInitComplete;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    TRIFactorsState *_factorsState;
}

@property (readonly, nonatomic) TRITrackingId *trackingId;
@property (readonly, nonatomic) TRILogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithIdentifier:(int)a0;
+ (BOOL)requiresLogging;
+ (id)clientWithIdentifier:(int)a0 unit:(int)a1;
+ (BOOL)requiresTrialDataVaultAccess;
+ (id)activeRolloutInformation:(id *)a0;
+ (id)activeExperimentInformation:(id *)a0;
+ (id)printedNCVInformation;
+ (id)printedRolloutInformation:(id *)a0;
+ (id)printedExperimentInformation:(id *)a0;
+ (id)sysdiagnoseInfoWithError:(id *)a0;
+ (id)clientWithProjectId:(int)a0 factorsState:(id)a1;
+ (BOOL)isPlatformBinary;

- (void)dispose;
- (void)removeUpdateHandlerForToken:(id)a0;
- (void)setLogger:(id)a0;
- (id)levelForFactor:(id)a0 withNamespace:(unsigned int)a1;
- (id)experimentIdentifiersWithNamespaceName:(id)a0;
- (BOOL)immediateDownloadForNamespaceNames:(id)a0 allowExpensiveNetworking:(BOOL)a1 error:(id *)a2;
- (id)treatmentIdWithNamespaceName:(id)a0;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)a0;
- (id)initWithClientIdentifier:(int)a0 paths:(id)a1 unit:(int)a2 staleFactorsUsageGracePeriod:(double)a3 logger:(id)a4;
- (id)initWithClientIdentifier:(int)a0 paths:(id)a1 unit:(int)a2 factorsState:(id)a3 staleFactorsUsageGracePeriod:(double)a4 logger:(id)a5;
- (void)_checkEntitlements;
- (void)_invalidateFactors;
- (BOOL)_hasAppropriatePermissionsForNamespaceName:(id)a0;
- (id)experimentIdWithNamespaceName:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;
- (void).cxx_destruct;
- (void)_registerUpdateHandlerForNamespaceName:(id)a0 notificationCallback:(id)a1 clientMethodNameForLogging:(const char *)a2 callingFunctionReturnAddressForLogging:(void *)a3;
- (void)_setupExcessiveStaleFactorsUsageTimerWithGuardedData:(id)a0 namespace:(id)a1 clientMethodNameForLogging:(const char *)a2 callingFunctionReturnAddressForLogging:(void *)a3;
- (BOOL)trialIdentifiersWithNamespaceName:(id)a0 experimentId:(id *)a1 deploymentId:(int *)a2 treatmentId:(id *)a3;
- (BOOL)hasDownloadedNamespaceWithName:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 usingBlock:(id /* block */)a1;
- (id)rolloutIdentifiersWithNamespaceName:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)downloadNamespaceWithName:(id)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithNonLoggingClientIdentifier:(int)a0 paths:(id)a1;
- (id)newTrackingId;
- (id)newTrackingIdWithTreatmentRefresh:(BOOL)a0;
- (id)rolloutIdWithNamespaceName:(id)a0;
- (long long)_appContainerType:(id)a0;
- (BOOL)registerNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 error:(id *)a5;
- (BOOL)deregisterNamespaceName:(id)a0 error:(id *)a1;
- (id)sizesForFactors:(id)a0 withNamespaceName:(id)a1 forMetric:(unsigned long long)a2 error:(id *)a3;
- (void)downloadLevelsForFactors:(id)a0 withNamespace:(id)a1 queue:(id)a2 options:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)removeLevelsForFactors:(id)a0 withNamespace:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (BOOL)setPurgeabilityLevelsForFactors:(id)a0 withNamespaceName:(id)a1;
- (id)purgeabilityLevelsForFactorsWithNamespaceName:(id)a0;
- (BOOL)setFactorsProvisionalForNamespace:(id)a0 error:(id *)a1;
- (BOOL)promoteFactorsForNamespace:(id)a0 error:(id *)a1;
- (void)removeDownloadStatusHandlersWithToken:(id)a0;
- (unsigned long long)statusOfDownloadForFactors:(id)a0 withNamespace:(id)a1 token:(id *)a2 queue:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)treatmentIdWithNamespace:(unsigned int)a0;
- (id)experimentIdWithNamespace:(unsigned int)a0;
- (void)downloadNamespaceWithName:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasRegisteredNamespaceWithName:(id)a0;
- (id)factorLevelsWithNamespaceName:(id)a0;
- (void)refresh;
- (void)dealloc;
- (id)_refresh:(BOOL)a0;
- (void)_lazyInit;
- (id)factorLevelsWithNamespace:(unsigned int)a0;

@end

@class TRILogger, NSString, _PASLock, TRITrackingId, NSObject, TRIDefaultFactorProvider;
@protocol OS_dispatch_queue, TRIPaths;

@interface TRIClient : NSObject <TRIFactorProviding> {
    id<TRIPaths> _paths;
    TRIDefaultFactorProvider *_defaultFactorProvider;
    int _projectId;
    TRILogger *_trialDevLogger;
    _PASLock *_lock;
    struct atomic_flag { _Atomic BOOL _Value; } _isLazyInitComplete;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) TRITrackingId *trackingId;
@property (readonly, nonatomic) TRILogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresTrialDataVaultAccess;
+ (id)clientWithIdentifier:(int)a0;
+ (BOOL)requiresLogging;
+ (id)clientWithIdentifier:(int)a0 unit:(int)a1;
+ (BOOL)isPlatformBinary;

- (id)levelForFactor:(id)a0 withNamespace:(unsigned int)a1;
- (void)_checkEntitlements;
- (BOOL)registerNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 error:(id *)a5;
- (id)initWithClientIdentifier:(int)a0 paths:(id)a1 unit:(int)a2 logger:(id)a3 devLogger:(id)a4;
- (void).cxx_destruct;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)a0;
- (void)downloadLevelsForFactors:(id)a0 withNamespace:(id)a1 queue:(id)a2 options:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)treatmentIdWithNamespace:(unsigned int)a0;
- (void)downloadNamespaceWithName:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)newTrackingId;
- (BOOL)hasDownloadedNamespaceWithName:(id)a0;
- (id)factorLevelsWithNamespace:(unsigned int)a0;
- (void)_invalidateNamespacesWithGuardedData:(id)a0;
- (long long)_appContainerType:(id)a0;
- (void)removeUpdateHandlerForToken:(id)a0;
- (id)newTrackingIdWithTreatmentRefresh:(BOOL)a0;
- (void)downloadNamespaceWithName:(id)a0 options:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)rolloutIdWithNamespaceName:(id)a0;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)_lazyInit;
- (BOOL)hasRegisteredNamespaceWithName:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)_registerUpdateHandlerForNamespaceName:(id)a0 notificationCallback:(id)a1;
- (BOOL)deregisterNamespaceName:(id)a0 error:(id *)a1;
- (id)addUpdateHandlerForNamespaceName:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)trialIdentifiersWithNamespaceName:(id)a0 experimentId:(id *)a1 deploymentId:(int *)a2 treatmentId:(id *)a3;
- (id)factorLevelsWithNamespaceName:(id)a0;
- (id)experimentIdWithNamespace:(unsigned int)a0;
- (id)initWithNonLoggingClientIdentifier:(int)a0 paths:(id)a1;
- (id)treatmentIdWithNamespaceName:(id)a0;
- (id)experimentIdWithNamespaceName:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;

@end

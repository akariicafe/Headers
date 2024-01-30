@class PFUbiquityLocation, NSString, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSRecursiveLock, NSOperationQueue, NSPersistentStoreCoordinator, NSObject, PFUbiquityRecordsImporterSchedulingContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    PFUbiquitySwitchboardCacheWrapper *_sideLoadCacheWrapper;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    NSRecursiveLock *_schedulingLock;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    unsigned long long _numPendingNotifications;
    BOOL _allowBaselineRoll;
    unsigned long long _pendingImportOperationsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)operationWasInterruptedDuringImport:(id)a0;
- (id)initWithLocalPeerID:(id)a0 andUbiquityRootLocation:(id)a1;
- (id)createSortedOperationsArrayWithMetadata:(id)a0 isFirstImport:(BOOL)a1;
- (void)scheduleRecoveryTimer;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)a0;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)a0;
- (void)recoveryOperation:(id)a0 didReplaceLocalStoreFileWithBaseline:(id)a1;
- (void)recoveryOperation:(id)a0 encounteredAnError:(id)a1 duringRecoveryOfBaseline:(id)a2;
- (void)rollResponseOperation:(id)a0 successfullyAdoptedBaseline:(id)a1;
- (void)rollResponseOperation:(id)a0 encounteredAnError:(id)a1 whileTryingToAdoptBaseline:(id)a2;
- (long long)context:(id)a0 shouldHandleInaccessibleFault:(id)a1 forObjectID:(id)a2 andTrigger:(id)a3;
- (void)operationDidFinish:(id)a0;

@end

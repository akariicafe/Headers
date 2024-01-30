@class NSNumber, NSString, NSMutableDictionary, HDProfile, NSObject, HDQuantitySeriesManager;
@protocol OS_dispatch_queue;

@interface HDDataManager : NSObject <HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observersByDataType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synchronousObserverLock;
    NSMutableDictionary *_synchronousObserversBySampleType;
    BOOL _needsSynchronousNotification;
    unsigned long long _openTransactions;
    NSMutableDictionary *_pendingObjectsBySampleType;
    NSNumber *_lastAnchor;
    double _lastNotifyLogTime;
    long long _notifyCount;
    long long _samplesAddedCount;
    long long _samplesJournaledCount;
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (id)initWithProfile:(id)a0;
- (void)addObserver:(id)a0 forDataType:(id)a1;
- (BOOL)deleteObjectsWithUUIDCollection:(id)a0 configuration:(id)a1 error:(id *)a2;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(BOOL)a3 error:(id *)a4;
- (BOOL)deleteSamplesWithTypes:(id)a0 sourceEntities:(id)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)insertDataObjects:(id)a0 error:(id *)a1;
- (void)removeObserverForAllTypes:(id)a0;
- (BOOL)deleteSamplesWithTypes:(id)a0 sourceBundleIdentifier:(id)a1 userRequested:(BOOL)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)deleteDataObjects:(id)a0 restrictedSourceEntities:(id)a1 failIfNotFound:(BOOL)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 error:(id *)a3;
- (void)setBackgroundObserverFrequency:(id)a0 forDataType:(id)a1 frequency:(long long)a2 appSDKVersion:(unsigned int)a3 completion:(id /* block */)a4;
- (BOOL)deleteDataObjectsOfClass:(Class)a0 predicate:(id)a1 limit:(unsigned long long)a2 deletedSampleCount:(unsigned long long *)a3 notifyObservers:(BOOL)a4 generateDeletedObjects:(BOOL)a5 userRequested:(BOOL)a6 recursiveDeleteAuthorizationBlock:(id /* block */)a7 error:(id *)a8;
- (void)shouldNotifyForDataObjects:(id)a0 provenance:(id)a1 database:(id)a2 anchor:(id)a3;
- (BOOL)insertDataObjects:(id)a0 sourceEntity:(id)a1 deviceEntity:(id)a2 sourceVersion:(id)a3 creationDate:(double)a4 error:(id *)a5;
- (void)removeSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (BOOL)deleteSamplesWithUUIDs:(id)a0 generateDeletedObjects:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)synchronouslyCloseObserverTransactionAndNotify;
- (BOOL)associateObjectUUIDs:(id)a0 objectUUID:(id)a1 error:(id *)a2;
- (BOOL)deleteSamplesWithSourceEntities:(id)a0 error:(id *)a1;
- (long long)hasSampleWithBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)containsDataObject:(id)a0;
- (void)openObserverTransaction;
- (void)removeObserver:(id)a0 forDataType:(id)a1;
- (void)addSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (BOOL)deleteDataObjectsOfClass:(Class)a0 predicate:(id)a1 limit:(unsigned long long)a2 deletedSampleCount:(unsigned long long *)a3 notifyObservers:(BOOL)a4 generateDeletedObjects:(BOOL)a5 recursiveDeleteAuthorizationBlock:(id /* block */)a6 error:(id *)a7;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(BOOL)a3 updateSourceOrder:(BOOL)a4 resolveAssociations:(BOOL)a5 error:(id *)a6;
- (void)closeObserverTransaction;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)a0 intervals:(id)a1 userRequested:(BOOL)a2 transaction:(id)a3 anchor:(id)a4;
- (BOOL)deleteSamplesWithUUIDs:(id)a0 userRequested:(BOOL)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (void)addObserverForAllTypes:(id)a0;

@end

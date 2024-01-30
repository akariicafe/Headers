@class NSNumber, NSString, HDProfile, NSMutableDictionary, HDQuantitySeriesManager, NSObject;
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
}

@property (weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)addObserver:(id)a0 forDataType:(id)a1;
- (void)_notifySynchronousObserversForDeletedObjectTypes:(id)a0 anchor:(id)a1;
- (BOOL)deleteObjectsWithUUIDCollection:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)_deleteDataObjectsByUUIDSQLStringForConfiguration:(id)a0 entityType:(long long)a1 error:(id *)a2;
- (void)_notifyObserversSamplesWithTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_deleteObjectsWithTypes:(id)a0 sourceEntities:(id)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (void)removeObserver:(id)a0 forDataType:(id)a1;
- (void).cxx_destruct;
- (BOOL)insertDataObjects:(id)a0 error:(id *)a1;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(BOOL)a3 error:(id *)a4;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)a0 transaction:(id)a1 anchor:(id)a2;
- (void)closeObserverTransaction;
- (void)openObserverTransaction;
- (id)_queue_observersForKey:(id)a0 createIfNil:(BOOL)a1;
- (BOOL)deleteDataObjectsOfClass:(Class)a0 predicate:(id)a1 limit:(unsigned long long)a2 deletedSampleCount:(unsigned long long *)a3 notifyObservers:(BOOL)a4 generateDeletedObjects:(BOOL)a5 recursiveDeleteAuthorizationBlock:(id /* block */)a6 error:(id *)a7;
- (BOOL)_insertDataObjects:(id)a0 transaction:(id)a1 insertionContext:(id)a2 updateSourceOrder:(BOOL)a3 error:(id *)a4;
- (void)_callObserversIfPossible;
- (long long)hasSampleWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void)_notifyObserversWithAddedObjectsBySampleType:(id)a0 lastAnchor:(id)a1;
- (void)removeObserverForAllTypes:(id)a0;
- (BOOL)containsDataObject:(id)a0;
- (id)_synchronousObserverLock_synchronousObserverSetForSampleType:(id)a0;
- (id)diagnosticDescription;
- (id)_queue_observersForDataType:(id)a0 createIfNil:(BOOL)a1;
- (void)shouldNotifyForDataObjects:(id)a0 provenance:(id)a1 database:(id)a2 anchor:(id)a3;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 skipInsertionFilter:(BOOL)a3 updateSourceOrder:(BOOL)a4 resolveAssociations:(BOOL)a5 error:(id *)a6;
- (BOOL)deleteSamplesWithTypes:(id)a0 sourceEntities:(id)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (void)addSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)_observersForDataType:(id)a0;
- (BOOL)deleteDataObjects:(id)a0 restrictedSourceEntities:(id)a1 failIfNotFound:(BOOL)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)deleteSamplesWithSourceEntities:(id)a0 error:(id *)a1;
- (BOOL)_synchronousObserverLock_hasSynchronousObserverForSampleType:(id)a0;
- (void)synchronouslyCloseObserverTransactionAndNotify;
- (BOOL)insertDataObjects:(id)a0 sourceEntity:(id)a1 deviceEntity:(id)a2 sourceVersion:(id)a3 creationDate:(double)a4 error:(id *)a5;
- (void)_shouldNotifyForDeletedSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)removeSynchronousObserver:(id)a0 forSampleType:(id)a1;
- (id)_queue_observersAllTypesCreateIfNil:(BOOL)a0;
- (id)_observersForAllTypes;
- (BOOL)deleteSamplesWithUUIDs:(id)a0 generateDeletedObjects:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)deleteSamplesWithTypes:(id)a0 sourceBundleIdentifier:(id)a1 recursiveDeleteAuthorizationBlock:(id /* block */)a2 error:(id *)a3;
- (void)_notifySynchronousObserversIfPossible;
- (void)_callObservers:(id)a0 samples:(id)a1 type:(id)a2 anchor:(id)a3;
- (void)addObserverForAllTypes:(id)a0;
- (void)setBackgroundObserverFrequency:(id)a0 forDataType:(id)a1 frequency:(long long)a2 completion:(id /* block */)a3;
- (BOOL)insertDataObjects:(id)a0 withProvenance:(id)a1 creationDate:(double)a2 error:(id *)a3;
- (BOOL)associateObjectUUIDs:(id)a0 objectUUID:(id)a1 error:(id *)a2;
- (BOOL)deleteSamplesWithUUIDs:(id)a0 recursiveDeleteAuthorizationBlock:(id /* block */)a1 error:(id *)a2;

@end

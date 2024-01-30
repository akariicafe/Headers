@class HKObserverSet, NSString, HKHealthStore, NSUUID, HKTaskServerProxyProvider;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface> {
    HKObserverSet *_conceptObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _conceptIndexManagerStateLock;
    unsigned long long _lastKnownConceptIndexManagerState;
}

@property (class, readonly) NSString *taskServerIdentifier;

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) unsigned long long currentConceptIndexerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)conceptStore;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)_startTaskServerIfNeeded;
- (id)exportedInterface;
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)a0;
- (id)ontologyVersionWithError:(id *)a0;
- (id)conceptForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)loadRelationshipsForConcept:(id)a0 error:(id *)a1;
- (void)fetchConceptForIdentifier:(id)a0 loadRelationships:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)makeAssociationFromSample:(id)a0 toConcept:(id)a1;
- (BOOL)breakAssociationFromSample:(id)a0 toConcept:(id)a1;
- (long long)countOfConceptsAssociatedToUserRecordsWithError:(id *)a0;
- (BOOL)cleanUpAfterUnitTest;
- (void)resetOntologyUsingAssetAtLocation:(id)a0 rememberLocation:(BOOL)a1 completion:(id /* block */)a2;
- (void)registerAsConceptObserver:(id)a0 onQueue:(id)a1;
- (void)unregisterAsConceptObserver:(id)a0 onQueue:(id)a1;
- (id)initWithHealthStore:(id)a0;

@end

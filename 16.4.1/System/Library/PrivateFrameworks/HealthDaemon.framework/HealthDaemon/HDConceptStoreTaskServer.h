@class NSString;

@interface HDConceptStoreTaskServer : HDStandardTaskServer <HDConceptIndexManagerObserver, HKConceptStoreServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)a0 samplesProcessedCount:(long long)a1;
- (id)exportedInterface;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)a0;
- (void)remote_currentIndexingState:(id /* block */)a0;
- (void)remote_queryConceptByIdentifier:(id)a0 loadRelationships:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(id /* block */)a0;
- (void)remote_queryRelationshipsForNodeWithID:(id)a0 completion:(id /* block */)a1;
- (void)remote_startObservingConceptIndexManagerWithCompletion:(id /* block */)a0;
- (void)remote_testTaskServerWithCompletion:(id /* block */)a0;

@end

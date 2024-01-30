@class NSString, NSURL, NSArray, NSDictionary, NSXPCStoreServerRequestHandlingPolicy, NSXPCListener, NSManagedObjectModel, NSMapTable;

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol, NSXPCListenerDelegate> {
    id _delegate;
    NSURL *_modelURL;
    NSManagedObjectModel *_model;
    NSURL *_storeURL;
    NSDictionary *_storeOptions;
    NSArray *_entitlementNames;
    NSXPCListener *_listener;
    NSXPCStoreServerRequestHandlingPolicy *_policy;
    NSMapTable *_connectionToCoordinatorMap;
    BOOL _postRemoteChangeNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)debugDefault;

- (void)stopListening;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (id)handleQueryGenerationRequestInContext:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)postRemoteChangeNotificationForContext:(id)a0;
- (id)handleQueryGenerationReleaseRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleBatchInsertRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleRelationshipFaultRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleObtainRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handlePersistentHistoryRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)initForStoreWithURL:(id)a0 usingModel:(id)a1 options:(id)a2 policy:(id)a3;
- (id)handleBatchDeleteRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleQueryGenerationReopenRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)startListening;
- (oneway void)handleRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)retainedCacheForConnection:(id)a0;
- (id)handlePersistentHistoryTokenRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)_populateObject:(id)a0 withValuesFromClient:(id)a1;
- (BOOL)setupRecoveryForConnectionContext:(id)a0 ifNecessary:(id)a1;
- (long long)context:(id)a0 shouldHandleInaccessibleFault:(id)a1 forObjectID:(id)a2 andTrigger:(id)a3;
- (id)initForStoreWithURL:(id)a0 usingModelAtURL:(id)a1 options:(id)a2 policy:(id)a3;
- (id)unpackQueryGeneration:(id)a0 withContext:(id)a1;
- (id)handleFetchRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleFaultRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)setErrorHandlingDelegate:(id)a0;
- (id)retainedXPCEncodableGenerationTokenForOriginal:(id)a0 inContext:(id)a1;
- (id)handleMetadataRequestInContext:(id)a0;
- (id)localGenerationForXPCToken:(id)a0 withContext:(id)a1;
- (void)removeCachesForConnection:(id)a0;
- (id)_createCoordinator;
- (id)handleSaveRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)requestHandlingPolicy;
- (id)handleBatchUpdateRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)handleNotificationNameRequestInContext:(id)a0 error:(id *)a1;
- (id)errorHandlingDelegate;
- (BOOL)errorIsPlausiblyAnSQLiteIssue:(id)a0;
- (id)delegate;

@end

@class NSHashTable, NSString, NSXPCConnection, DESBundleRegistry, DESDeviceIdentifierStore, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DESServiceConnection : NSObject <DESService> {
    double _connectionStartTime;
    NSXPCConnection *_connection;
    DESDeviceIdentifierStore *_identifierStore;
    DESBundleRegistry *_bundleRegistry;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_consumedSandboxExtensions;
    NSHashTable *_evaluationSessions;
    BOOL _hasSentActivityShouldDeferEvent;
}

@property (readonly) DESDeviceIdentifierStore *_identifierStore;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)recordSetWithRecipeType:(id)a0 nativeRecords:(id)a1 coreDuetEventsUUIDs:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchCoreDuetEventsForBundleId:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)taskIsDeferred;
- (void)_releaseSandboxExtensions;
- (void)_fetchSavedRecordInfoForBundleId:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)deleteSavedRecordForBundleId:(id)a0 identfier:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)fetchTelemetryForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchNativeRecordDataForRecordUUID:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)runEvaluationForBundleId:(id)a0 recipePath:(id)a1 recordUUIDs:(id)a2 attachments:(id)a3 sandboxExtensions:(id)a4 completion:(id /* block */)a5;
- (void)saveRecordForBundleId:(id)a0 data:(id)a1 recordInfo:(id)a2 completion:(id /* block */)a3;
- (void)fetchRecordsForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchSavedRecordInfoForRecordType:(id)a0 completion:(id /* block */)a1;
- (BOOL)_hasRecordAccessToBundleId:(id)a0 error:(id *)a1;
- (void)deleteAllSavedRecordsForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)postRecipeResultForBundleId:(id)a0 baseURL:(id)a1 result:(id)a2 recipeUUID:(id)a3 completion:(id /* block */)a4;
- (void)_runLiveEvaluationForBundleId:(id)a0 baseURL:(id)a1 localeIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)_consumeSandboxExtensions:(id)a0 error:(id *)a1;
- (id)initWithXPCConnection:(id)a0 activity:(id)a1;
- (void)runLiveEvaluationForBundleId:(id)a0 baseURL:(id)a1 localeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)sendActivityShouldDeferEvent;
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_runEvaluationForBundleId:(id)a0 recipeEvaluation:(id)a1 attachments:(id)a2 completion:(id /* block */)a3;
- (void)_prepareEvaluationSessionForBundleId:(id)a0 baseURL:(id)a1 localeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)fetchInstalledBundlesIdsWithCompletion:(id /* block */)a0;
- (void)saveCoreDuetEvent:(id)a0 completion:(id /* block */)a1;
- (void)wakeUpWithCompletion:(id /* block */)a0;
- (void)setValue:(id)a0 forInfoKey:(id)a1 bundleID:(id)a2 completion:(id /* block */)a3;

@end

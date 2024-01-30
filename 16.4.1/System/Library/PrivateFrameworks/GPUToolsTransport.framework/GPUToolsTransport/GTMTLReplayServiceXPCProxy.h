@class NSSet, NSMutableDictionary, GTServiceConnection, NSObject, GTBulkDataServiceXPCProxy;
@protocol OS_os_log, GTXPCConnection;

@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService> {
    id<GTXPCConnection> _gtXPCConnection;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    id /* block */ _connectionhandler;
    NSObject<OS_os_log> *_log;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    NSMutableDictionary *_acceleratorStructureSessionToDispatcherId;
    NSMutableDictionary *_observerIdToPort;
}

- (unsigned long long)registerObserver:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)terminateProcess;
- (void)loadDataSource:(id)a0;
- (void)endDebugArchive;
- (void)addBatchFilteringRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginAccelerationStructureSessionWithObjectID:(unsigned long long)a0 functionIndex:(unsigned int)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)beginDebugArchive:(id)a0 extensionToken:(id)a1 debugFiles:(id)a2 completionHandler:(id /* block */)a3;
- (void)debugFuncStop:(unsigned long long)a0;
- (void)deleteAllArchives;
- (void)deleteAllArchivesWithCompletionHandler:(id /* block */)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)derivedCounterData:(id)a0 attributes:(id)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)enableDrawCallPresent:(BOOL)a0;
- (void)enableOutlinePresent:(BOOL)a0;
- (void)enableWireframePresent:(BOOL)a0;
- (void)fetchResourceObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchResourceObjectBatch:(id)a0 compressionKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateDependencyGraphThumbnails:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateListOfDebugFilesInCacheWithCompletionHandler:(id /* block */)a0;
- (void)generateShaderDebuggerTrace:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateThumbnails:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)invalidateSavePointerAliases;
- (void)loadAnalysis:(id /* block */)a0;
- (void)loadArchives;
- (void)overridesConfiguration:(id)a0;
- (void)queryInducedGPUPerfStateWithCompletionHandler:(id /* block */)a0;
- (void)queryShaderInfo:(id)a0 timelineInfo:(BOOL)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)replayArchive;
- (void)resourcesUsedForFunctionIndex:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendAccelerationStructureDataWithSessionID:(unsigned long long)a0 data:(id)a1;
- (void)sendDebuggingFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)signalInterposeSemaphore;
- (void)teardownAccelerationStructureSession:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)traceConfiguration:(id)a0;
- (void)updateLibraries:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateResourceObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)wireframeLineWidth:(float)a0;

@end

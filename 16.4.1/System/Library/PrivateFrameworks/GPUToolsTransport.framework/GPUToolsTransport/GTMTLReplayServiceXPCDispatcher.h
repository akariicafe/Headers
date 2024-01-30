@class NSObject, GTBulkDataService, GTServiceProperties;
@protocol OS_os_log, GTMTLReplayService;

@interface GTMTLReplayServiceXPCDispatcher : GTXPCDispatcher <GTMTLReplayServiceXPCDispatcher> {
    id<GTMTLReplayService> _implInstance;
    GTBulkDataService *_bulkDataService;
    GTServiceProperties *_bulkDataServiceProperties;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (void)generateShaderDebuggerTrace_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)debugFuncStop_:(id)a0 replyConnection:(id)a1;
- (void)queryInducedGPUPerfStateWithCompletionHandler_:(id)a0 replyConnection:(id)a1;
- (void)addBatchFilteringRequest_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)beginAccelerationStructureSessionWithObjectID_functionIndex_dataReceivedHandler_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)beginDebugArchive_extensionToken_debugFiles_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)bulkDataService:(id)a0 replyConnection:(id)a1;
- (void)deleteAllArchives:(id)a0 replyConnection:(id)a1;
- (void)deleteAllArchivesWithCompletionHandler_:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (void)derivedCounterData_attributes_dataReceivedHandler_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)enableDrawCallPresent_:(id)a0 replyConnection:(id)a1;
- (void)enableOutlinePresent_:(id)a0 replyConnection:(id)a1;
- (void)enableWireframePresent_:(id)a0 replyConnection:(id)a1;
- (void)endDebugArchive:(id)a0 replyConnection:(id)a1;
- (void)fetchResourceObjectBatch_compressionKey_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)fetchResourceObject_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)generateDependencyGraphThumbnails_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)generateListOfDebugFilesInCacheWithCompletionHandler_:(id)a0 replyConnection:(id)a1;
- (void)generateThumbnails_completionHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 bulkDataService:(id)a2 bulkDataServiceProperties:(id)a3;
- (void)invalidateSavePointerAliases:(id)a0 replyConnection:(id)a1;
- (void)loadAnalysis_:(id)a0 replyConnection:(id)a1;
- (void)loadArchives:(id)a0 replyConnection:(id)a1;
- (void)loadDataSource_:(id)a0 replyConnection:(id)a1;
- (void)overridesConfiguration_:(id)a0 replyConnection:(id)a1;
- (void)queryShaderInfo_timelineInfo_dataReceivedHandler_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;
- (void)replayArchive:(id)a0 replyConnection:(id)a1;
- (void)resourcesUsedForFunctionIndex_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)sendAccelerationStructureDataWithSessionID_data_:(id)a0 replyConnection:(id)a1;
- (void)sendDebuggingFiles_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)signalInterposeSemaphore:(id)a0 replyConnection:(id)a1;
- (void)teardownAccelerationStructureSession_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)terminateProcess:(id)a0 replyConnection:(id)a1;
- (void)traceConfiguration_:(id)a0 replyConnection:(id)a1;
- (void)updateLibraries_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)updateResourceObject_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)wireframeLineWidth_:(id)a0 replyConnection:(id)a1;

@end

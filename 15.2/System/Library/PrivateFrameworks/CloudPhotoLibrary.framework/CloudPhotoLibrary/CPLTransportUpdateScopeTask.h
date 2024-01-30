@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (id)taskIdentifier;
- (void).cxx_destruct;
- (void)launch;
- (void)cancel;

@end

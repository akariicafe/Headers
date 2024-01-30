@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (void).cxx_destruct;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;

@end

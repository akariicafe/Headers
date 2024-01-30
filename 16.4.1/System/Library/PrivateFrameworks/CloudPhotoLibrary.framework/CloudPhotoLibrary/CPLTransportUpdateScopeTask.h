@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (void).cxx_destruct;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;

@end

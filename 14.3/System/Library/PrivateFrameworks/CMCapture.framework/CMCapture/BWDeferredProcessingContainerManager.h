@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    struct OpaqueFigCaptureDeferredContainerManager { } *_xpcContainerManager;
}

+ (id)sharedInstance;

- (id)createProcessingContainerWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (void)releaseProcessingContainer:(id)a0;
- (id)init;
- (void)_setXPCContainerManager:(struct OpaqueFigCaptureDeferredContainerManager { } *)a0;
- (struct OpaqueFigCaptureDeferredContainerManager { } *)_copyXPCContainerManager;
- (int)_queryContainerStatus:(id)a0 captureRequestIdentifier:(id)a1 status:(int *)a2;
- (id)_copyRemoteContainer:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 err:(int *)a3;
- (int)_releaseRemoteContainer:(id)a0 captureRequestIdentifier:(id)a1;
- (int)waitForShaderCompilation;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;

@end

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    struct OpaqueFigCaptureDeferredContainerManager { } *_xpcContainerManager;
}

+ (id)sharedInstance;

- (id)init;
- (id)createProcessingContainerWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (void)releaseProcessingContainer:(id)a0;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (int)waitForShaderCompilation;

@end

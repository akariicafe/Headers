@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient

- (void)setSharedMemoryForDeferredLogging:(id)a0;
- (BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)a0 error:(id *)a1;
- (BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id *)a0 error:(id *)a1;
- (BOOL)incompleteRestoreProcesses:(id *)a0 error:(id *)a1;
- (void)setPhotosXPCEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end

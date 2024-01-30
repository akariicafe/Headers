@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient

- (void)setPhotosXPCEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)a0 error:(id *)a1;
- (BOOL)getPhotosXPCEndpoint:(id *)a0 error:(id *)a1;
- (BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id *)a0 error:(id *)a1;
- (void)setSharedMemoryForDeferredLogging:(id)a0;
- (BOOL)incompleteRestoreProcesses:(id *)a0 error:(id *)a1;

@end

@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)incompleteRestoreProcessesWithReply:(id /* block */)a0;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)a0;
- (void)dumpStatusIncludingDaemon:(BOOL)a0 reply:(id /* block */)a1;
- (void)setPhotosXPCEndpoint:(id)a0 withReply:(id /* block */)a1;
- (void)dumpPhotoAnalysisStatusWithReply:(id /* block */)a0;
- (void)initializeSharedMemoryForDeferredLogs:(id)a0;

@end

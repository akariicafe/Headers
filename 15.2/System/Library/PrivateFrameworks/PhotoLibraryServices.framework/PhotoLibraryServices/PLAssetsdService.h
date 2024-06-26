@class PLPhotoLibraryBundleController, NSString, NSXPCConnection, NSURL, PLLibraryServicesManager, PLCacheMetricsCollectorServerShell, PLAssetsdConnectionAuthorization, PLAssetsdInnerService, PLPhotoLibraryBundle, PLPhotoLibrary, PLAssetsdCPLResourceDownloader;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol> {
    PLAssetsdInnerService *_innerLibraryService;
    PLAssetsdInnerService *_innerLibraryInternalService;
    PLAssetsdInnerService *_innerSystemLibraryURLReadOnlyService;
    PLAssetsdInnerService *_innerLibraryManagementService;
    PLAssetsdInnerService *_innerPhotoKitService;
    PLAssetsdInnerService *_innerPhotoKitAddService;
    PLAssetsdInnerService *_innerResourceAvailabilityService;
    PLAssetsdInnerService *_innerResourceService;
    PLAssetsdInnerService *_innerResourceWriteOnlyService;
    PLAssetsdInnerService *_innerResourceInternalService;
    PLAssetsdInnerService *_innerCloudService;
    PLAssetsdInnerService *_innerCloudInternalService;
    PLAssetsdInnerService *_innerMigrationService;
    PLAssetsdInnerService *_innerSyncService;
    PLAssetsdInnerService *_innerNotificationService;
    PLAssetsdInnerService *_innerDemoService;
    PLAssetsdInnerService *_innerDiagnosticsService;
    PLAssetsdInnerService *_innerDebugService;
    PLAssetsdInnerService *_innerPrivacySupportService;
    BOOL _readyForDaemonJobs;
    NSXPCConnection *_connection;
    int _remotePID;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly, nonatomic) NSURL *libraryURL;
@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, nonatomic) BOOL isPhotosClient;
@property (readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)requiredStateForMigrationService;
- (void)handleInterruption;
- (long long)requiredStateForCloudInternalService;
- (void)bindToPhotoLibraryURL:(id)a0 sandboxExtension:(id)a1 withReply:(id /* block */)a2;
- (id)newLibraryInternalService;
- (id)permissionsForResourceService;
- (id)_autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)a0 wellKnownLibraryIdentifier:(long long *)a1;
- (void)invalidateConnectionWithReason:(id)a0;
- (id)newPhotoKitService;
- (void)handleInvalidation;
- (id)newPhotoKitAddService;
- (id)resourceDownloader;
- (long long)requiredStateForPrivacySupportService;
- (id)permissionsForLibraryService;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(id /* block */)a0;
- (id)newResourceAvailabilityService;
- (id)permissionsForDiagnosticsService;
- (id)permissionsForDebugService;
- (id)newSystemLibraryURLReadOnlyService;
- (long long)requiredStateForLibraryService;
- (long long)requiredStateForNotificationService;
- (long long)requiredStateForSystemLibraryURLReadOnlyService;
- (id)permissionsForPrivacySupportService;
- (long long)requiredStateForDiagnosticsService;
- (long long)requiredStateForResourceService;
- (void)getResourceServiceWithReply:(id /* block */)a0;
- (id)newResourceService;
- (void)getDebugServiceWithReply:(id /* block */)a0;
- (void)getNotificationServiceWithReply:(id /* block */)a0;
- (id)permissionsForNotificationService;
- (id)permissionsForResourceAvailabilityService;
- (void)getSyncServiceWithReply:(id /* block */)a0;
- (id)newDiagnosticsService;
- (void)runDaemonJob:(id)a0 isSerial:(BOOL)a1;
- (id)newPrivacySupportService;
- (id)newLibraryManagementService;
- (id)clientDebugDescription;
- (id)newLibraryService;
- (id)permissionsForSystemLibraryURLReadOnlyService;
- (long long)requiredStateForResourceWriteOnlyService;
- (void)getLibraryManagementServiceWithReply:(id /* block */)a0;
- (long long)requiredStateForLibraryManagementService;
- (void)logStatus;
- (void)getDiagnosticsServiceWithReply:(id /* block */)a0;
- (long long)requiredStateForLibraryInternalService;
- (void)getPhotoKitAddServiceWithReply:(id /* block */)a0;
- (void)getResourceInternalServiceWithReply:(id /* block */)a0;
- (long long)requiredStateForDemoService;
- (id)permissionsForDemoService;
- (void)getLibraryInternalServiceWithReply:(id /* block */)a0;
- (long long)requiredStateForResourceAvailabilityService;
- (id)permissionsForSyncService;
- (void).cxx_destruct;
- (long long)requiredStateForResourceInternalService;
- (void)getPhotoKitServiceWithReply:(id /* block */)a0;
- (void)getPrivacySupportServiceWithReply:(id /* block */)a0;
- (id)serviceContextWithSelector:(SEL)a0;
- (id)newSyncService;
- (id)permissionsForCloudInternalService;
- (void)bindToPhotoLibraryURL:(id)a0 sandboxExtension:(id)a1 clientOptions:(id)a2 withReply:(id /* block */)a3;
- (id)permissionsForLibraryInternalService;
- (long long)requiredStateForPhotoKitAddService;
- (void)getCloudInternalServiceWithReply:(id /* block */)a0;
- (id)newNotificationService;
- (void)getResourceAvailabilityServiceWithReply:(id /* block */)a0;
- (long long)requiredStateForDebugService;
- (void)getDemoServiceWithReply:(id /* block */)a0;
- (id)permissionsForPhotoKitAddService;
- (id)newCloudService;
- (id)_waitForLibraryServicesForDaemonJob;
- (id)permissionsForResourceWriteOnlyService;
- (id)newDemoService;
- (id)permissionsForCloudService;
- (id)newResourceInternalService;
- (void)getLibraryServiceWithReply:(id /* block */)a0;
- (id)permissionsForMigrationService;
- (id)permissionsForResourceInternalService;
- (long long)requiredStateForCloudService;
- (void)getResourceWriteOnlyServiceWithReply:(id /* block */)a0;
- (id)newDebugService;
- (long long)requiredStateForPhotoKitService;
- (void)runDaemonJob:(id)a0 isSerial:(BOOL)a1 withReply:(id /* block */)a2;
- (BOOL)_prepareToRunDaemonJob:(id)a0 error:(id *)a1;
- (id)newResourceWriteOnlyService;
- (void)getCloudServiceWithReply:(id /* block */)a0;
- (id)newCloudInternalService;
- (id)initWithConnection:(id)a0 libraryBundleController:(id)a1;
- (long long)requiredStateForSyncService;
- (id)permissionsForLibraryManagementService;
- (id)_photoLibrary;
- (id)newMigrationService;
- (void)getMigrationServiceWithReply:(id /* block */)a0;
- (id)permissionsForPhotoKitService;

@end

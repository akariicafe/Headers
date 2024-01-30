@class PLAutoBindingProxyFactory, PLAssetsdCloudInternalClient, PLAssetsdSyncClient, PLAssetsdNotificationClient, PLAssetsdPrivacySupportClient, PLAssetsdResourceAvailabilityClient, PLAssetsdLibraryInternalClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdResourceClient, PLAssetsdLibraryManagementClient, PLAssetsdCloudClient, PLAssetsdResourceInternalClient, NSObject, PLAssetsdPhotoKitClient, PLAssetsdMigrationClient, PLAssetsdClientXPCConnection, PLAssetsdPhotoKitAddClient, PLAssetsdDebugClient, PLAssetsdDiagnosticsClient, PLAssetsdClientSandboxExtensions, PLAssetsdLibraryClient, PLAssetsdDemoClient, PLAssetsdResourceWriteOnlyClient;
@protocol OS_dispatch_queue;

@interface PLAssetsdClient : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_connection;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceAvailabilityClient *_resourceAvailabilityClient;
    PLAssetsdPhotoKitAddClient *_photoKitAddClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdSyncClient *syncClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdPhotoKitAddClient *photoKitAddClient;
@property (readonly) PLAssetsdResourceAvailabilityClient *resourceAvailabilityClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;

+ (id)sharedSystemLibraryAssetsdClient;

- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareToShutdown;
- (void)sendDaemonJob:(id)a0 shouldRunSerially:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)_updateLibraryStateConnectionInterrupted:(id)a0;
- (id)resourceWriteOnlyClient;
- (id)privacySupportClient;
- (id)systemLibraryURLReadOnlyClient;
- (void)waitUntilConnectionSendsAllMessages;
- (id)initWithPhotoLibraryURL:(id)a0;
- (id)_setupClientClass:(Class)a0 proxyGetter:(SEL)a1 options:(long long)a2;

@end

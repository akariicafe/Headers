@class PLAssetsdClientXPCConnection, PLAssetsdPrivacySupportClient, PLAssetsdLibraryManagementClient, PLAssetsdDemoClient, NSObject, PLAssetsdSystemLibraryURLReadOnlyClient;
@protocol OS_dispatch_queue;

@interface PLNonBindingAssetsdClient : NSObject {
    PLAssetsdClientXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdPrivacySupportClient *privacySupportClient;

- (id)init;
- (void).cxx_destruct;
- (void)_updateLibraryStateConnectionInterrupted:(id)a0;

@end

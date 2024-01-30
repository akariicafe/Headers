@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_dataMigratordQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)moveiPhotoLibraryMediaWithReply:(id /* block */)a0;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)a0 reply:(id /* block */)a1;
- (void)dataMigrationWillFinishWithReply:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0;

@end

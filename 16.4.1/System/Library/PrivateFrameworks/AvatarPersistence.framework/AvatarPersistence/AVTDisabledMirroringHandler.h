@protocol AVTCoreDataCloudKitMirroringHandlerDelegate;

@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>

@property (weak, nonatomic) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;

- (void)exportChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)importChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)resetZoneWithManagedObjectContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleExportChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)scheduleImportChangesWithManagedObjectContext:(id)a0 workQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startObservingResetSyncWithNotificationCenter:(id)a0;

@end

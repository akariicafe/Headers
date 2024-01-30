@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)_handleNotification:(id)a0;
- (id)initWithLibraryBundleController:(id)a0;
- (void)_openSystemPhotoLibrary;
- (void)_handleCloudPhotoNotification;
- (void).cxx_destruct;
- (void)registerForNotifications;

@end

@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)_handleNotification:(id)a0;
- (id)initWithLibraryBundleController:(id)a0;
- (void)_handleCloudPhotoNotification;
- (void)_openSystemPhotoLibrary;
- (void)registerForNotifications;
- (void).cxx_destruct;

@end

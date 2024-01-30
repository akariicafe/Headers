@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)userInfo;
- (void).cxx_destruct;
- (id)initNotificationWithPhotoLibrary:(id)a0;
- (id)object;
- (id)name;

@end

@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)object;
- (id)userInfo;
- (void).cxx_destruct;
- (id)name;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end

@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (id)init;
- (void)dealloc;

@end

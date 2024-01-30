@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryForceClientExitNotification;
- (void)dealloc;
- (void)_photoLibraryCorruptNotification;
- (id)init;

@end

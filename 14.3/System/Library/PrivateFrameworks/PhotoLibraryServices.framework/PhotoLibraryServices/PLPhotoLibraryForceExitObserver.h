@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_photoLibraryCorruptNotification;
- (void)dealloc;
- (void)_photoLibraryForceClientExitNotification;

@end

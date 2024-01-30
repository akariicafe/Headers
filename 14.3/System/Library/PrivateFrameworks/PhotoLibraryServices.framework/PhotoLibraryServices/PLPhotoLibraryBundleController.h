@class PLBackgroundJobService, NSMutableDictionary, PLCoreDataFileRecorder, NSDate;

@interface PLPhotoLibraryBundleController : NSObject {
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    PLCoreDataFileRecorder *_statementRecorder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
}

@property (retain) PLBackgroundJobService *backgroundJobService;

+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)a0;
+ (id)sharedBundleController;
+ (id)_realPathForLibraryURL:(id)a0;

- (void)shutdownAllBundlesWithReason:(id)a0;
- (void)handleUnknownMergeEvent;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)bundleForLibraryURL:(id)a0;
- (void)shutdownBundle:(id)a0 reason:(id)a1;
- (id)lookupOrCreateBundleForLibraryURL:(id)a0;
- (void)_unregisterBundle:(id)a0 pauseUntilDate:(id)a1;
- (id)initWithBundleType:(long long)a0 libraryServicesManagerDelegateClass:(Class)a1;
- (BOOL)bindAssetsdService:(id)a0 toBundle:(id)a1 error:(id *)a2;
- (id)libraryServicesStatusDescription;
- (id)openBundleAtLibraryURL:(id)a0;
- (id)replaceBundleForRebuildAtLibraryURL:(id)a0;
- (id)_lookupOrCreateBundleForLibraryURL:(id)a0 replaceExisting:(BOOL)a1;
- (id)libraryBundlePaths;
- (id)libraryBundles;

@end

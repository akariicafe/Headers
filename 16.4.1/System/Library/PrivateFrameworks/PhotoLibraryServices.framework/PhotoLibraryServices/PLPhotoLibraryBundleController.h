@class PLBackgroundJobService, PLSQLStatementFileRecorder, NSMutableDictionary, NSDate, PLCacheDeleteRegistration;

@interface PLPhotoLibraryBundleController : NSObject {
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    PLSQLStatementFileRecorder *_statementRecorder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
}

@property (retain) PLBackgroundJobService *backgroundJobService;
@property (retain) PLCacheDeleteRegistration *cacheDeleteRegistration;

+ (id)_realPathForLibraryURL:(id)a0;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)a0;
+ (id)sharedBundleController;
+ (void)resetSharedBundleController;

- (void)shutdownAllBundlesWithReason:(id)a0;
- (id)replaceBundleForRebuildAtLibraryURL:(id)a0;
- (id)openBundleAtLibraryURL:(id)a0;
- (id)libraryBundles;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)a0;
- (id)lookupOrCreateBundleForLibraryURL:(id)a0;
- (void)shutdownBundle:(id)a0 reason:(id)a1;
- (BOOL)bindAssetsdService:(id)a0 toBundle:(id)a1 error:(id *)a2;
- (id)bundleForLibraryURL:(id)a0;
- (id)init;
- (id)libraryServicesStatusDescription;
- (void)handleUnknownMergeEvent;
- (id)libraryBundlePaths;
- (id)_lookupOrCreateBundleForLibraryURL:(id)a0 replaceExisting:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithBundleType:(long long)a0 libraryServicesManagerDelegateClass:(Class)a1;
- (void)_unregisterBundle:(id)a0 pauseUntilDate:(id)a1;

@end

@class FBSDisplayConfiguration, XBCacheDeleteRequestHandler;
@protocol XBApplicationProviding, XBApplicationLaunchRequestProviding;

@interface XBApplicationController : NSObject {
    long long _statusBarOrientation;
    FBSDisplayConfiguration *_mainDisplayConfiguration;
    id<XBApplicationLaunchRequestProviding> _launchRequestProvider;
    XBCacheDeleteRequestHandler *_snapshotCacheDeleteRequestHandler;
}

@property (readonly, nonatomic) id<XBApplicationProviding> applicationProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithMainDisplayConfiguration:(id)a0 applicationProvider:(id)a1 launchRequestProvider:(id)a2;
- (void)performPostMigrationLaunchImageGeneration;
- (void)removeCachedLaunchImagesForApplications:(id)a0 forgettingApps:(BOOL)a1;
- (id)findRecentlyUsedOfApplications:(id)a0;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 completionWithCaptureInfo:(id /* block */)a2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 createCaptureInfo:(BOOL)a2 completionWithCaptureInfo:(id /* block */)a3;
- (void)_configureCacheDelete;
- (void)_deleteLegacyCachesSnapshotPathsIfNeeded;
- (id)_launchRequestsForApplication:(id)a0 withCompatibilityInfo:(id)a1;
- (void)_removeAllGeneratedLaunchImagesAndSnapshots;
- (void)_removeLaunchImagesMatchingPredicate:(id)a0 forApplications:(id)a1 forgettingApps:(BOOL)a2;
- (void)_updateStatusBarOrientation;
- (void)deleteAllSnapshotsIfScreenSizeChanged;
- (id)initWithMainDisplayConfiguration:(id)a0 applicationProvider:(id)a1 launchRequestProvider:(id)a2 configureCacheDelete:(BOOL)a3;

@end

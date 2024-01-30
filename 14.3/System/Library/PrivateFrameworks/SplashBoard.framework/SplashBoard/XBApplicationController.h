@class FBSDisplayConfiguration;
@protocol XBApplicationProviding, XBApplicationLaunchRequestProviding;

@interface XBApplicationController : NSObject {
    long long _statusBarOrientation;
    FBSDisplayConfiguration *_mainDisplayConfiguration;
    id<XBApplicationLaunchRequestProviding> _launchRequestProvider;
}

@property (readonly, nonatomic) id<XBApplicationProviding> applicationProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateStatusBarOrientation;
- (void)_deleteLegacyCachesSnapshotPathsIfNeeded;
- (void)_migrateDataIfNeeded;
- (void)_removeAllGeneratedLaunchImagesAndSnapshots;
- (void)_removeLaunchImagesMatchingPredicate:(id)a0 forApplications:(id)a1 forgettingApps:(BOOL)a2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 createCaptureInfo:(BOOL)a2 completionWithCaptureInfo:(id /* block */)a3;
- (id)_launchRequestsForApplication:(id)a0 withCompatibilityInfo:(id)a1;
- (id)initWithMainDisplayConfiguration:(id)a0 applicationProvider:(id)a1 launchRequestProvider:(id)a2;
- (void)removeCachedLaunchImagesForApplications:(id)a0 forgettingApps:(BOOL)a1;
- (void)captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)a0 firstImageIsReady:(id /* block */)a1 completionWithCaptureInfo:(id /* block */)a2;

@end

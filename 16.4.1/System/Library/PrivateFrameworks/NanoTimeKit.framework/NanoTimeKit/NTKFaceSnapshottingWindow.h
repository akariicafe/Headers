@interface NTKFaceSnapshottingWindow : UIWindow

+ (BOOL)_isSecure;

- (BOOL)_alwaysGetsContexts;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_wantsSceneAssociation;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (id)init;
- (BOOL)_shouldUseRemoteContext;
- (void)updateForDevice:(id)a0;

@end

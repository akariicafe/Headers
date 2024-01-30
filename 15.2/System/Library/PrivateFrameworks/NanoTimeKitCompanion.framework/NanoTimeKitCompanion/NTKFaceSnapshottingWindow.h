@interface NTKFaceSnapshottingWindow : UIWindow

+ (BOOL)_isSecure;

- (BOOL)_alwaysGetsContexts;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (BOOL)_shouldUseRemoteContext;
- (id)init;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_wantsSceneAssociation;
- (void)updateForDevice:(id)a0;

@end

@interface _ClientRendererWindow : UIWindow

+ (BOOL)_isSecure;

- (BOOL)_isWindowServerHostingManaged;
- (long long)_orientationForViewTransform;
- (long long)_orientationForRootTransform;
- (id)init;
- (BOOL)_shouldUseRemoteContext;
- (BOOL)_wantsSceneAssociation;
- (BOOL)_alwaysGetsContexts;

@end

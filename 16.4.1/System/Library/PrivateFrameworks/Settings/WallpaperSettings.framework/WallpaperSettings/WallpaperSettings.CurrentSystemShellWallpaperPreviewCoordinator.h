@interface WallpaperSettings.CurrentSystemShellWallpaperPreviewCoordinator : NSObject <WSBaseCoordinator, SBSUIWallpaperPreviewViewControllerDelegate> {
    void /* unknown type, empty encoding */ childCoordinators;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ wallpaperLocation;
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ delegate;
}

- (void)start;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

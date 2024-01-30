@interface WallpaperSettings.WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator> {
    void /* unknown type, empty encoding */ childCoordinators;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ navigationController;

- (BOOL)runTestWithTestName:(id)a0 options:(id)a1;
- (id)initWithNavigationController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)start;

@end

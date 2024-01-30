@interface WallpaperSettings.PosterBoardUICoordinator : NSObject <PRUIModalControllerDelegate, WSBaseCoordinator> {
    void /* unknown type, empty encoding */ childCoordinators;
    void /* unknown type, empty encoding */ windowScene;
    void /* unknown type, empty encoding */ entryPoint;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ modalController;
}

- (void)modalController:(id)a0 didDismissSheetWithResponse:(id)a1;
- (void)modalController:(id)a0 willDismissSheetWithResponse:(id)a1;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end

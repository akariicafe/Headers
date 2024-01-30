@interface SeymourUI.PictureInPicturePresenter : NSObject <AVPlayerViewControllerDelegate> {
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ display;
}

- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

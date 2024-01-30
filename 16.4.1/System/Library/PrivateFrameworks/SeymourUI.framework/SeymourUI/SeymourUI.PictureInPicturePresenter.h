@interface SeymourUI.PictureInPicturePresenter : NSObject <AVPlayerViewControllerDelegate> {
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ display;
}

- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

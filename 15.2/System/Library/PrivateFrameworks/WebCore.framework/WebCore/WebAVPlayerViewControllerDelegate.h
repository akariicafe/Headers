@class NSString;

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct WeakPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _fullscreenInterface;
}

@property void *fullscreenInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)playerViewController:(id)a0 shouldExitFullScreenWithReason:(long long)a1;
- (id).cxx_construct;
- (BOOL)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)a0;
- (void)playerViewControllerWillStartPictureInPicture:(id)a0;
- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)a0;
- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;

@end

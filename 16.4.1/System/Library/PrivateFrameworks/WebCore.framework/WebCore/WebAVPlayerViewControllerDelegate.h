@class NSString;

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>, WTF::DefaultRefDerefTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>> { void *m_ptr; } m_controlBlock; } _fullscreenInterface;
}

@property (nonatomic) struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> { struct VideoFullscreenInterfaceAVKit *x0; } fullscreenInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playerViewController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)a0;
- (void)playerViewControllerWillStartPictureInPicture:(id)a0;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (BOOL)playerViewController:(id)a0 shouldExitFullScreenWithReason:(long long)a1;
- (BOOL)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)a0;

@end

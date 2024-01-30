@class NSString;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>, WTF::DefaultRefDerefTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>> { void *m_ptr; } m_controlBlock; } _fullscreenInterface;
    struct RetainPtr<AVPlayerViewController> { void *m_ptr; } _avPlayerViewController;
    struct RetainPtr<NSTimer> { void *m_ptr; } _startPictureInPictureTimer;
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> { id m_weakReference; } _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFromParentViewController;
- (void)flashPlaybackControlsWithDuration:(double)a0;
- (BOOL)showsPlaybackControls;
- (void)setPlayerController:(id)a0;
- (id)view;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id).cxx_construct;
- (BOOL)isPictureInPictureActive;
- (void)setShowsPlaybackControls:(BOOL)a0;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)isPictureInPicturePossible;
- (void)stopPictureInPicture;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (void)setDelegate:(id)a0;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)startPictureInPicture;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setAllowsPictureInPicturePlayback:(BOOL)a0;
- (void)removeObserver;
- (void).cxx_destruct;
- (BOOL)pictureInPictureActive;
- (id)avPlayerViewController;
- (void)initObserver;
- (id)initWithFullscreenInterface:(void *)a0;
- (BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)a0;
- (void)tryToStartPictureInPicture;

@end

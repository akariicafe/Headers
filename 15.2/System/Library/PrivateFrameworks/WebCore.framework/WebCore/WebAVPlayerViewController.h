@class NSString;
@protocol AVPlayerViewControllerDelegate_WebKitOnly;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    void *_fullscreenInterface;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentingViewController;
    struct RetainPtr<AVPlayerViewController> { void *m_ptr; } _avPlayerViewController;
    struct RetainPtr<NSTimer> { void *m_ptr; } _startPictureInPictureTimer;
    struct RetainPtr<AVObservationController> { void *m_ptr; } _avPlayerViewControllerObservationController;
    id<AVPlayerViewControllerDelegate_WebKitOnly> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showsPlaybackControls;
- (BOOL)isPictureInPictureActive;
- (void)setAllowsPictureInPicturePlayback:(BOOL)a0;
- (id)view;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)removeFromParentViewController;
- (void)stopPictureInPicture;
- (BOOL)pictureInPictureActive;
- (void)setShowsPlaybackControls:(BOOL)a0;
- (BOOL)isPictureInPicturePossible;
- (void)dealloc;
- (id).cxx_construct;
- (void)setPlayerController:(id)a0;
- (void)startPictureInPicture;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (id)initWithFullscreenInterface:(void *)a0;
- (BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)a0;
- (void)tryToStartPictureInPicture;
- (id)avPlayerViewController;

@end

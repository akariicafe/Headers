@class AVPictureInPictureController, UIWindow, NSTimer, NSString, AVPictureInPictureViewController, AVPictureInPictureControllerContentSource, AVPlayerController;

@interface AVPictureInPictureContentViewController : UIViewController <AVPictureInPictureContentSource> {
    AVPlayerController *_playerController;
}

@property (weak, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (retain, nonatomic) NSTimer *observeSourceViewTimer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownVideoRectInWindow;
@property (nonatomic) BOOL lastKnownIsVisible;
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avkit_videoRectInWindow;
@property (readonly, nonatomic) BOOL avkit_isVisible;
@property (readonly, nonatomic) UIWindow *avkit_window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)a0;
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)a0 playerController:(id)a1;
- (id)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)a0 playerController:(id)a1;
- (id)avkit_makePlayerControllerIfNeeded:(id)a0;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)a0;
- (long long)avkit_contentSourceType;
- (BOOL)avkit_wantsManagedSecondScreenPlayback;
- (void).cxx_destruct;
- (void)_observeSourceView;
- (void)_removeFromParent;
- (void)_setLastKnownIsVisible:(BOOL)a0 videoRectInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startObservingSourceView;
- (void)stopObservingSourceView;

@end

@class UITapGestureRecognizer, NSString, AVPlaybackContentContainerView, AVPlayerViewController, AVZoomingBehavior, AVObservationController, AVPlaybackContentZoomingView;

@interface AVZoomingBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, UIGestureRecognizerDelegate, AVBehaviorContext>

@property (weak, nonatomic) AVZoomingBehavior *behavior;
@property (retain, nonatomic) AVPlaybackContentZoomingView *contentZoomingView;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } contentAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_handleDoubleTapGestureRecognizer:(id)a0;
- (void)didAddBehavior:(id)a0;
- (void)_updateZoomingView;
- (void)didRemoveBehavior:(id)a0;
- (id)initWithAVKitOwner:(id)a0;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (void)willAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;

@end

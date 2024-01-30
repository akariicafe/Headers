@class AVNewsWidgetPlayerBehavior, NSString, AVPlayerViewController, AVPlaybackContentTransitioningView, UIView, AVPlayer;

@interface AVNewsWidgetPlayerBehaviorContext : NSObject <AVPlaybackContentTransitioningViewDelegate, AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext>

@property (retain, nonatomic) AVPlayer *contentTransitioningPlayer;
@property (retain, nonatomic) AVPlaybackContentTransitioningView *contentTransitionView;
@property (weak, nonatomic) AVNewsWidgetPlayerBehavior *behavior;
@property (readonly, nonatomic) long long activeContentTransitionType;
@property (readonly, nonatomic, getter=isContentTransitionInteractive) BOOL contentTransitionInteractive;
@property (readonly, nonatomic) UIView *contentTransitioningOverlayView;
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) BOOL startNextContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) BOOL startPreviousContentTransitionButtonEnabled;
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;

- (void).cxx_destruct;
- (void)startContentTransition:(long long)a0;
- (BOOL)contentTransitioningViewShouldBeginDragging:(id)a0 locationInView:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)contentTransitioningView:(id)a0 shouldBeginTransitionWithDirection:(long long)a1;
- (id)contentTransitioningPlayerContentViewForTransition:(id)a0;
- (void)setVideoGravityForTransitioningContent:(id)a0;
- (void)contentTransitioningViewDidChangeTransitionStatus:(id)a0 oldState:(long long)a1 oldTransitionDirection:(long long)a2 oldProgress:(double)a3;
- (long long)_transitionDirectionForContentTransitionType:(long long)a0;
- (void)updateStartLeftRightContentTransitionButtonsEnabled;
- (long long)contentTransitionTypeForTransitionDirection:(long long)a0;
- (void)viewDidLoad;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (id)initWithAVKitOwner:(id)a0;
- (void)willAddBehavior:(id)a0;
- (void)didAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;
- (void)didRemoveBehavior:(id)a0;

@end

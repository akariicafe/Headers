@class NSValue, NSString, AVPlaybackContentContainerView;
@protocol AVPlaybackContentTransitioningViewDelegate;

@interface AVPlaybackContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer>

@property (retain, nonatomic) NSValue *targetContentOffset;
@property (copy, nonatomic) NSString *stateDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForActiveContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForTransitioningContentView;
@property (nonatomic) long long boundsOrContentSizeAdjustmentCount;
@property (nonatomic, getter=isTransitionInteractive) BOOL transitionInteractive;
@property (weak, nonatomic) id<AVPlaybackContentTransitioningViewDelegate> contentTransitioningDelegate;
@property (readonly, nonatomic) AVPlaybackContentContainerView *incomingContentView;
@property (readonly, nonatomic) long long transitionState;
@property (readonly, nonatomic) long long transitionDirection;
@property (readonly, nonatomic) double transitionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;

- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setDelegate:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)_descriptionForState:(long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (void)setVideoGravity:(long long)a0 removingAllSubayerTransformAnimations:(BOOL)a1;
- (void)_setTransitionState:(id)a0 transitionDirection:(id)a1 transitionProgress:(id)a2;
- (void)performTransition:(long long)a0;
- (void)_updateTransitionStateIfPossible;
- (void)_performBoundsOrContentSizeAdjustment:(id /* block */)a0;
- (BOOL)_isAdjustingBoundsOrContentSize;
- (void)_updateSizeAndContentFrame;
- (void)_ensureContentViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameExcludingActiveContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameExcludingTransitioningContent;
- (id)_makeStateDescription;

@end

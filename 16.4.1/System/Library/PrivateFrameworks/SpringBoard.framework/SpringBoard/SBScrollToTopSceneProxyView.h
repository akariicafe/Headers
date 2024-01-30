@class SBSceneHandle;
@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>

@property (retain, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) id<SBScrollToTopSceneProxyViewDelegate> delegate;

- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)didMoveToWindow;
- (BOOL)isScrollEnabled;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end

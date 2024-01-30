@class SBSceneHandle;
@protocol SBScrollToTopSceneProxyViewDelegate;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>

@property (retain, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) id<SBScrollToTopSceneProxyViewDelegate> delegate;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (BOOL)isScrollEnabled;
- (void)didMoveToWindow;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;

@end

@class _UIContextMenuLayoutArbiterOutput;

@interface _UICompactContextMenuPresentationAnimation : _UIContextMenuPresentationAnimation

@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (nonatomic) BOOL isDismissTransition;

- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_setBackgroundVisible:(BOOL)a0;
- (id)_backgroundView;
- (void)_performAlongsideAnimations;
- (void).cxx_destruct;
- (void)_actuallyPerformTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;

@end

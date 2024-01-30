@class _UIContextMenuLayoutArbiterOutput;

@interface _UICompactContextMenuPresentationAnimation : _UIContextMenuPresentationAnimation

@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (nonatomic) BOOL isDismissTransition;

- (id)_backgroundView;
- (void).cxx_destruct;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_setBackgroundVisible:(BOOL)a0;

@end

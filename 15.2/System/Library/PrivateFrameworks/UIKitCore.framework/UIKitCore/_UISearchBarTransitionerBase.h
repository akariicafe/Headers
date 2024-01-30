@class _UISearchBarTransitionContext, _UISearchBarLayout, UIView;

@interface _UISearchBarTransitionerBase : NSObject

@property (readonly, weak, nonatomic) UIView *searchBar;
@property (retain, nonatomic) _UISearchBarTransitionContext *transitionContext;
@property (readonly, nonatomic) _UISearchBarLayout *activeLayout;

- (void)animate;
- (void)prepare;
- (id)initWithNewTransitionContextForSearchBar:(id)a0;
- (void)complete;
- (id)initWithTransitionContext:(id)a0 forSearchBar:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end

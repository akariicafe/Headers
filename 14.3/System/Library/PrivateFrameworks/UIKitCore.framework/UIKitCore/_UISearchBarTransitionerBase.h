@class _UISearchBarTransitionContext, _UISearchBarLayout, UIView;

@interface _UISearchBarTransitionerBase : NSObject

@property (readonly, weak, nonatomic) UIView *searchBar;
@property (retain, nonatomic) _UISearchBarTransitionContext *transitionContext;
@property (readonly, nonatomic) _UISearchBarLayout *activeLayout;

- (void)cancel;
- (void)prepare;
- (id)init;
- (void).cxx_destruct;
- (void)animate;
- (void)complete;
- (id)initWithTransitionContext:(id)a0 forSearchBar:(id)a1;
- (id)initWithNewTransitionContextForSearchBar:(id)a0;

@end

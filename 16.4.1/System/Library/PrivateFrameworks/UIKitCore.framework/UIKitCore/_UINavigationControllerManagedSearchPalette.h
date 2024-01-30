@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette

@property (readonly, nonatomic) UIView *viewForAsymmetricFade;
@property (nonatomic) BOOL ignoreGeometryChanges;
@property (copy, nonatomic) id /* block */ resetAfterSearchFieldFade;
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar;
@property (nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;

- (BOOL)_shouldUpdateBackground;
- (void)_popDisableLayoutFlushingForTransition;
- (void)_pushDisableLayoutFlushingForTransition;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initWithNavigationController:(id)a0 forEdge:(unsigned long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_propagateBackgroundToContents;
- (void)_updateLayoutForCurrentConfiguration;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (BOOL)_supportsSpecialSearchBarTransitions;
- (void).cxx_destruct;

@end

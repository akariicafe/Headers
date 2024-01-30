@class SearchUISeparatorView;

@interface SPUINavigationBar : UINavigationBar

@property (retain) SearchUISeparatorView *topDividerView;

+ (BOOL)_supportsCanvasView;

- (void)tlk_updateForAppearance:(id)a0;
- (void)showSeparator:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateBackgroundViewVisibility;
- (void)didAddSubview:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)isLocked;
- (void)didMoveToWindow;
- (void)performShowSeparator:(BOOL)a0 animated:(BOOL)a1;
- (void)pushNavigationItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_popNavigationItemWithTransition:(int)a0;

@end

@class _UIContextMenuCellContentView, UIVisualEffectView, UIView;

@interface _UIContextMenuSubmenuTitleView : UICollectionReusableView

@property (retain, nonatomic) UIVisualEffectView *bgView;
@property (retain, nonatomic) UIVisualEffectView *obscuringMaterialView;
@property (retain, nonatomic) UIView *highlightedBgView;
@property (retain, nonatomic) UIView *separator;
@property (readonly, nonatomic) _UIContextMenuCellContentView *contentView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL allowsFocus;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (long long)_focusItemDeferralMode;
- (void).cxx_destruct;
- (void)setBackgroundMaterialGroupName:(id)a0;
- (BOOL)_wantsKeyCommandsWhenDeferred;
- (void)addObscuringMaterialViewWithGroupName:(id)a0;

@end

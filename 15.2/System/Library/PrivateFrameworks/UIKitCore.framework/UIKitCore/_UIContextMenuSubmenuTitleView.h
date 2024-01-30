@class _UIContextMenuCellContentView, UIVisualEffectView, UIView;

@interface _UIContextMenuSubmenuTitleView : UICollectionReusableView

@property (retain, nonatomic) UIVisualEffectView *bgView;
@property (retain, nonatomic) UIVisualEffectView *obscuringMaterialView;
@property (retain, nonatomic) UIView *highlightedBgView;
@property (retain, nonatomic) UIView *separator;
@property (readonly, nonatomic) _UIContextMenuCellContentView *contentView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL allowsFocus;

- (long long)_focusItemDeferralMode;
- (BOOL)_wantsKeyEventsWhenDeferred;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundMaterialGroupName:(id)a0;
- (void)addObscuringMaterialViewWithGroupName:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end

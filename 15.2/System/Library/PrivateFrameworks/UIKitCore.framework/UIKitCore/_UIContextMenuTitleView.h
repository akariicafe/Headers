@class NSString, UIVisualEffectView, UILabel, UIView;

@interface _UIContextMenuTitleView : UICollectionReusableView

@property (retain, nonatomic) UIVisualEffectView *bgView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;

- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundMaterialGroupName:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLayoutMargins;
- (unsigned long long)_titleLabelNumberOfLines;
- (void)didMoveToWindow;

@end

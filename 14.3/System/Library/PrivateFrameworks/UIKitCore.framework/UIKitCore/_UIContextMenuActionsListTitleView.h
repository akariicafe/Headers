@class NSString, UILabel, UIView;

@interface _UIContextMenuActionsListTitleView : UICollectionReusableView

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;

- (id)_titleFont;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (unsigned long long)_titleLabelNumberOfLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutMargins;
- (void)traitCollectionDidChange:(id)a0;

@end

@class NSString, UIVisualEffectView, UILabel, UIView;

@interface _UIContextMenuHeaderView : UICollectionReusableView {
    BOOL _needsConstraintRebuild;
}

@property (retain, nonatomic) UIVisualEffectView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) unsigned long long separatorStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;

- (double)_separatorHeight;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundMaterialGroupName:(id)a0;
- (BOOL)_isDisplayingTitleLabel;
- (void)_setNeedsConstraintRebuild;
- (unsigned long long)_titleLabelNumberOfLines;

@end

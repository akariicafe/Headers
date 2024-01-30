@class UIColor, NSString, UILabel, UIButton;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
    BOOL _isCompactUI;
}

@property (nonatomic) BOOL useCompactTopInset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) unsigned long long titleStyle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) id /* block */ action;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;

- (void)createSubviews;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)resetFonts;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

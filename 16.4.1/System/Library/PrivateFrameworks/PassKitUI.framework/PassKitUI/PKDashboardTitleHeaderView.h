@class UIColor, NSString, UIButton, UIImage, UILabel, UIMenu;

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
    BOOL _isCompactUI;
}

@property (nonatomic) BOOL useCompactTopInset;
@property (nonatomic) BOOL useLargeBottomInset;
@property (nonatomic) BOOL preferTitleWrapOverStackedLayout;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) unsigned long long titleStyle;
@property (nonatomic) double topPadding;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) UIImage *actionImage;
@property (copy, nonatomic) UIColor *actionColor;
@property (nonatomic) unsigned long long actionStyle;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) UIMenu *menu;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;
+ (double)defaultTableHorizontalInset;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (BOOL)shouldShowActionButton;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetButtonInsets;
- (void)createSubviews;
- (void)resetFonts;

@end

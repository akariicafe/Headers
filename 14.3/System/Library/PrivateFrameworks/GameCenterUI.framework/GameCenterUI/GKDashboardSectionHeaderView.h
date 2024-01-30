@class UIColor, NSString, UIFont, NSLayoutConstraint, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint;
@property (nonatomic) BOOL onDarkBackground;

+ (double)defaultHeight;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0 withFont:(id)a1;
+ (double)widthForTitle:(id)a0 withFont:(id)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)awakeFromNib;
- (void)setTitle:(id)a0;
- (id)title;

@end

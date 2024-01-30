@class NSString, UILabel, UIView, NSLayoutConstraint;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleWithNoTopMargin;
@property (retain, nonatomic) NSLayoutConstraint *titleWithTopMargin;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updatePreferredTitleFont;

@end

@class UILabel, NSString, UIView;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updatePreferredTitleFont;

@end

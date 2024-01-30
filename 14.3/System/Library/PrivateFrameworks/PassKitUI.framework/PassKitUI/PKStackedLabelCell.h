@class NSString, UIColor, UILabel;

@interface PKStackedLabelCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _isRTL;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_applyLabelStyles;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;

@end

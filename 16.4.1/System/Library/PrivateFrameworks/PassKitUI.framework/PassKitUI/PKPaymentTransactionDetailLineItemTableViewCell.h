@class UIFont, NSString, UIColor, UILabel;

@interface PKPaymentTransactionDetailLineItemTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIColor *valueColor;
@property (nonatomic) BOOL hasTrailingLineSeperator;

- (void)setSeparatorStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)separatorStyleForTrailingLineSeparator;

@end

@class UILabel, UIImageView;

@interface PKAccountTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
}

+ (id)titleFont;
+ (id)subtitleFont;
+ (double)estimateHeightForCellWithMinimum:(double)a0;

- (void)setSpecifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureCellForAccount:(id)a0;
- (id)_subtitleColorForAccountState:(unsigned long long)a0;
- (id)_subtitleForAccount:(id)a0;
- (id)_titleForAccount:(id)a0;

@end

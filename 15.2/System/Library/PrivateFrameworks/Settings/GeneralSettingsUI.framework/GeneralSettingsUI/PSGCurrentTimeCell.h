@interface PSGCurrentTimeCell : PSTableCell

- (void)layoutSubviews;
- (void)setupLayoutConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)normalConstraints;
- (id)axConstraints;

@end

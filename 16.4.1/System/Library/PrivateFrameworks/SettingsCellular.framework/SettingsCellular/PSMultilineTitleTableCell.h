@class NSLayoutConstraint;

@interface PSMultilineTitleTableCell : PSTableCell

@property (retain, nonatomic) NSLayoutConstraint *valueTrailingCon;
@property (retain, nonatomic) NSLayoutConstraint *titleLeadingCon;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

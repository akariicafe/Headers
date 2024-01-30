@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) UILabel *detailsLabel;
@property (retain, nonatomic) NSLayoutConstraint *detailsHeightContraint;

+ (long long)cellStyle;

- (void)setupConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;

@end

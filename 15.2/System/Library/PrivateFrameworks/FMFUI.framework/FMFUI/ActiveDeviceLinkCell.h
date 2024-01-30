@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) UILabel *detailsLabel;
@property (retain, nonatomic) NSLayoutConstraint *detailsHeightContraint;

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end

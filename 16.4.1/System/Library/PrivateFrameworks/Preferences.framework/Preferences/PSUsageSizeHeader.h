@class UILabel, UIStackView;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *_internalStackView;

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)setSize:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviewsAndConstraints;
- (void)setSizeLabelHidden:(BOOL)a0;

@end

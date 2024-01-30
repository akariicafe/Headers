@class UILabel, NSLayoutConstraint, UIStackView;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *_internalStackView;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelTrailingConstraint;

- (void)_setupSubviewsAndConstraints;
- (void)setSizeLabelHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setSize:(id)a0;
- (void)setTableView:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (id)initWithSpecifier:(id)a0;

@end

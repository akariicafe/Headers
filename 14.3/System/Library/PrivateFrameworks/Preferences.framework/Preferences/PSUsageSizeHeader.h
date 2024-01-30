@class UILabel, NSLayoutConstraint;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelTrailingConstraint;

- (id)initWithSpecifier:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)setSizeLabelHidden:(BOOL)a0;
- (void)updateConstraints;
- (void)setTableView:(id)a0;
- (void)setSize:(id)a0;

@end

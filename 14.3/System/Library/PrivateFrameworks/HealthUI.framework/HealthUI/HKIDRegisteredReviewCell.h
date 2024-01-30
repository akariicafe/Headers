@class NSString, UILabel;

@interface HKIDRegisteredReviewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end

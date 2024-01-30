@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)setupConstraints;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end

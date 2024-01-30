@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end

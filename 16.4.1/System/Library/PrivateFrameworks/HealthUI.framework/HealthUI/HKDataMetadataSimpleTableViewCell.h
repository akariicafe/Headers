@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)_updateForCurrentSizeCategory;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end

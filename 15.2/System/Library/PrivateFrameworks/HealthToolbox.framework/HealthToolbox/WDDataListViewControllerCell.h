@class NSArray, UIImageView, UILabel, NSLayoutConstraint;

@interface WDDataListViewControllerCell : UITableViewCell {
    NSLayoutConstraint *_largeTextIconImageCenterYAnchorConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;

@end

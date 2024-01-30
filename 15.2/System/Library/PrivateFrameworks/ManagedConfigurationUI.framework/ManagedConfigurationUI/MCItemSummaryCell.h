@class UIImageView, UILabel, UIView;

@interface MCItemSummaryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupCell;

@end

@class UIImageView, UILabel, UIView;

@interface CertUIItemSummaryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;

+ (double)titleOriginX;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)_setupConstraints;
- (void)_setupCell;
- (id)_profileImageAppropriateForDevice;

@end

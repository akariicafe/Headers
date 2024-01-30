@class NSArray, UIImageView, UIImage, UILabel, UIImageSymbolConfiguration, NSString;

@interface HUDashboardListTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *dashboardNameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) UIImage *favoritesImage;
@property (retain, nonatomic) UIImage *roomImage;
@property (retain, nonatomic) UIImage *checkmarkImage;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageConfiguration;
@property (retain, nonatomic) NSArray *allConstraints;
@property (copy, nonatomic) NSString *dashboardName;
@property (nonatomic) BOOL isFavorites;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateIconView;
- (void)updateCheckmarkView;

@end

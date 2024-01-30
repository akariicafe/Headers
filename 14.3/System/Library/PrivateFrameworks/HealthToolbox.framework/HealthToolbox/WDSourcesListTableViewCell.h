@class UIImageView, UILabel, HKSourceDataModel;

@interface WDSourcesListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HKSourceDataModel *sourceModel;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setUpSubviews;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 fetchError:(id)a2;

@end

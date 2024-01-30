@class NSString, UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UILabel *registrarLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupSubviews;

@end

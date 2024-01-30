@class NSString, UILabel, UIButton;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *callToActionLabel;
@property (retain, nonatomic) UIButton *actionButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupSubviews;

@end

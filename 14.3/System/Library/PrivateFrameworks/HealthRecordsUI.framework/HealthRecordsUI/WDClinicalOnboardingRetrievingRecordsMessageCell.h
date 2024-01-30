@class UILabel, NSLayoutConstraint;

@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (nonatomic) double bottomPadding;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_setupConstraints;

@end

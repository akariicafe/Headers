@class UILabel, NSArray, UIActivityIndicatorView;

@interface WDAccountDetailsSharingStatusCell : UITableViewCell {
    NSArray *_withSpinnerConstraint;
    NSArray *_noSpinnerConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *statusIndicator;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)stopSpinner;
- (void)_setupUI;
- (void)startSpinner;

@end

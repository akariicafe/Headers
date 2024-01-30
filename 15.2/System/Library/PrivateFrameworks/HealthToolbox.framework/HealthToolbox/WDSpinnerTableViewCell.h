@class NSString, UIActivityIndicatorView, UIView, UILabel;

@interface WDSpinnerTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain) UIView *contentContainerView;
@property (retain) UIActivityIndicatorView *spinner;
@property (retain) UILabel *waitingReasonLabel;
@property (retain, nonatomic) NSString *waitingReason;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)prepareForReuse;

@end

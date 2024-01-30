@class UIColor, NSArray, UIActivityIndicatorView, UILabel;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (nonatomic) double leftInset;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIColor *originalLabelFontColor;

+ (id)_labelFont;
+ (id)_showMoreLocalizedString;
+ (id)_grayTextColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setText:(id)a0 textColor:(id)a1 spinnerEnabled:(BOOL)a2;
- (void)setInitialSearchInProgressState;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)a0 hasError:(BOOL)a1;
- (void)setShowMoreState;
- (void)setAvailabilityRequestInProgressState;

@end

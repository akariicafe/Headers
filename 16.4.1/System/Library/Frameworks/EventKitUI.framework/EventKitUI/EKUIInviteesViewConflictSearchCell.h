@class UIColor, NSArray, UIActivityIndicatorView, UILabel;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (nonatomic) double leftInset;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIColor *originalLabelFontColor;

+ (id)_labelFont;
+ (id)_grayTextColor;
+ (id)_showMoreLocalizedString;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setInitialSearchInProgressState;
- (void)_setText:(id)a0 textColor:(id)a1 spinnerEnabled:(BOOL)a2;
- (void)setAvailabilityRequestInProgressState;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)a0 hasError:(BOOL)a1;
- (void)setShowMoreState;

@end

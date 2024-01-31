@class UILabel, NSArray, UIActivityIndicatorView;

@interface CACentralTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) UILabel *connectionStatusLabel;
@property (retain, nonatomic) UILabel *inputLabel;
@property (retain, nonatomic) UILabel *slashLabel;
@property (retain, nonatomic) UILabel *outputLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (retain, nonatomic) NSArray *activityHConstraints;
@property (retain, nonatomic) NSArray *activityVConstraints;

- (void)dealloc;
- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)createInitialConstraints;
- (void)startIndicator;
- (void)stopIndicator;

@end

@class NSArray, NSString, UILabel, NSLayoutConstraint;

@interface EKUISendInvitationsCell : UITableViewCell

@property (retain, nonatomic) UILabel *simpleTextLabel;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSLayoutConstraint *leftInsetConstraint;
@property (retain, nonatomic) NSString *simpleText;

+ (id)_simpleTextLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)updateConstraints;

@end

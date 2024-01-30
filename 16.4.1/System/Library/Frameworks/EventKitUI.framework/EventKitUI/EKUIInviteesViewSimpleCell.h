@class UILabel, NSArray, NSString;

@interface EKUIInviteesViewSimpleCell : UITableViewCell

@property (retain, nonatomic) UILabel *simpleTextLabel;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSString *simpleText;

+ (long long)accessoryType;
+ (id)labelText;
+ (id)_simpleTextLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)isCentered;

@end

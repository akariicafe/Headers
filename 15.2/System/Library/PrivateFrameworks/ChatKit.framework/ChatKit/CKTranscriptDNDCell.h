@class UISwitch;

@interface CKTranscriptDNDCell : UITableViewCell

@property (retain, nonatomic) UISwitch *muteSwitch;

+ (id)identifier;
+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

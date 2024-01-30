@class UISwitch;

@interface CKTranscriptDNDCell : UITableViewCell

@property (retain, nonatomic) UISwitch *muteSwitch;

+ (double)preferredHeight;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

@class UIImageView, UILabel, WFTrigger;

@interface WFTriggerTypeCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *triggerIconView;
@property (readonly, nonatomic) UILabel *triggerTitleLabel;
@property (readonly, nonatomic) UILabel *triggerDescriptionLabel;
@property (retain, nonatomic) WFTrigger *trigger;
@property (retain, nonatomic) Class triggerTypeClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)updateUI;

@end

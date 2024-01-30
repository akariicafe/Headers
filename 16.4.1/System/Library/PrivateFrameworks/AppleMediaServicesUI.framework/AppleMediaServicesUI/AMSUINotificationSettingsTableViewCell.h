@class AMSNotificationSettingsItem, UISwitch;
@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;

@interface AMSUINotificationSettingsTableViewCell : UITableViewCell

@property (retain, nonatomic) UISwitch *itemSwitch;
@property (weak, nonatomic) id<AMSUINotificationInAppSettingsTableViewCellDelegate> delegate;
@property (retain, nonatomic) AMSNotificationSettingsItem *item;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)switchToggled:(id)a0;

@end

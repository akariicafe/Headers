@class NSString;

@interface HUUserManagementUserCell : UITableViewCell

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *invitationStatusString;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

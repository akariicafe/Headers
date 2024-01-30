@class UITextField;

@interface CNMeCardSharingSettingsNameCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

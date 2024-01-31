@class UIButton;
@protocol CNMeCardSharingSettingsPreferenceMenuCellDelegate;

@interface CNMeCardSharingSettingsPreferenceMenuCell : UITableViewCell

@property (retain, nonatomic) UIButton *menuButton;
@property (retain, nonatomic) UIButton *popupMenuButton;
@property (weak, nonatomic) id<CNMeCardSharingSettingsPreferenceMenuCellDelegate> delegate;

+ (id)cellIdentifier;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)menu;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)alwaysAskMenuTitle;
- (void)configureAccessoryView;
- (id)contactsOnlyMenuTitle;
- (void)layoutMenuButton;
- (void)setSharingAudience:(unsigned long long)a0;
- (id)titleForSharingAudience:(unsigned long long)a0;
- (void)updateContentConfigurationWithSecondaryText:(id)a0;
- (void)updateMenuButtonStatesWithSharingAudience:(unsigned long long)a0;

@end

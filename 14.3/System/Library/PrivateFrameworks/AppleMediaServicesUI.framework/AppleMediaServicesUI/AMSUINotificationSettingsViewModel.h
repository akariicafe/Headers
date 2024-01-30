@class NSArray, NSString;
@protocol AMSUINotificationSettingsViewModelDelegate;

@interface AMSUINotificationSettingsViewModel : NSObject <AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<AMSUINotificationSettingsViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) BOOL showAllowNotificationsButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)notificationInAppSettingsTableViewCellDidToggleValue:(id)a0 forItem:(id)a1;

@end

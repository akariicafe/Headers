@class NMCUICloudNotificationAccountDataSource, PSListController;

@interface NMCUISpecifierController : NSObject

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) NMCUICloudNotificationAccountDataSource *dataSource;
@property (nonatomic) BOOL isTinker;

+ (id)settingSpecifierWithTarget:(id)a0 set:(SEL)a1 get:(SEL)a2;
+ (id)titleSettingSpecifier;

- (id)specifiers;
- (void).cxx_destruct;
- (void)_accountSpecifierTapped:(id)a0;
- (id)_cloudNotificationsEnabled:(id)a0;
- (void)_setCloudNotificationsEnabled:(id)a0 withSpecifier:(id)a1;
- (id)groupSpecifierForTinker:(BOOL)a0;
- (BOOL)hasCloudNotificationAccounts;
- (id)initWithListController:(id)a0 dataSource:(id)a1 isTinker:(BOOL)a2;
- (id)specifierForAccount:(id)a0 onTap:(SEL)a1;

@end

@class SBSHomeScreenService;

@interface DBSHomeScreenPhoneListController : PSListController

@property (retain, nonatomic) SBSHomeScreenService *_homeScreenService;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setShowsBadgesInAppLibrary:(id)a0 specifier:(id)a1;
- (id)showsBadgesInAppLibrary:(id)a0;

@end

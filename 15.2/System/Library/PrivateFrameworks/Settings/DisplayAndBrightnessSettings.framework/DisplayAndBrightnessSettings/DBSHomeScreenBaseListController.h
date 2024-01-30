@class SBSHomeScreenService;

@interface DBSHomeScreenBaseListController : PSListController

@property (readonly, nonatomic) SBSHomeScreenService *_homeScreenService;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setShowsBadgesInAppLibrary:(id)a0 specifier:(id)a1;
- (id)showsBadgesInAppLibrary:(id)a0;

@end

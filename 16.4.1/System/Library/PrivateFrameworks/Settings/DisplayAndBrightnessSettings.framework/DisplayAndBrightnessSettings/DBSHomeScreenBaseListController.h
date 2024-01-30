@class SBSHomeScreenService, NSString, PSCloudSyncButton;

@interface DBSHomeScreenBaseListController : PSListController <PSCloudSyncDelegate>

@property (retain, nonatomic) PSCloudSyncButton *cloudSyncButton;
@property (readonly, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasMergeConflict;
- (void)isCloudSyncEnabled:(id /* block */)a0;
- (void)resolveMergeConflict:(unsigned long long)a0;
- (id)showsSpotlight:(id)a0;
- (void)setShowsBadgesInAppLibrary:(id)a0 specifier:(id)a1;
- (void)setShowsSpotlight:(id)a0 specifier:(id)a1;
- (id)showsBadgesInAppLibrary:(id)a0;

@end

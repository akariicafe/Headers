@class NSSManager, NSMutableDictionary, NSString, UIImage;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *dataDictionary;
@property (retain, nonatomic) UIImage *profileListIcon;
@property (retain, nonatomic) NSSManager *nssManager;
@property (nonatomic) BOOL hasFetchedProfilesInfo;
@property (nonatomic) BOOL hasFailedFetchingProfilesInfo;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cellHeight;
+ (id)specifiersForBlockedApps:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_showProgressIndicator;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)fetchRemoteProfileList;
- (void)_profileListChanged:(id)a0;
- (void)_installedApplicationsChanged:(id)a0;
- (void)_appSignerApplicationsChanged:(id)a0;
- (long long)_profilesCount;
- (id)_specifiersForDataDictionary;
- (void)_fetchPhoneProfileList;
- (int)_resolveIndexPathForSection:(id)a0;
- (BOOL)_isSectionPopulated:(int)a0;
- (id)_dataForIndexPath:(id)a0;
- (void)_handleProfileCellSelectionAtIndexPath:(id)a0;
- (BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)a0;
- (void)_hideProgressIndicatorAndShowBackButton:(BOOL)a0;
- (void)handleProfilesInfoResponse:(id)a0 error:(id)a1;
- (void)_blockedAppsChanged:(id)a0;
- (BOOL)_isUIProfileInstallationRestricted;

@end

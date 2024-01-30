@class NSArray, PSSpecifier;

@interface FamilyHotspotSettingsController : PSListController

@property (retain, nonatomic) NSArray *familyMembers;
@property (nonatomic) BOOL shouldShareWithFamily;
@property (retain, nonatomic) PSSpecifier *switchSpecifier;
@property (nonatomic) struct __WiFiManagerClient { } *wifiClient;

- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)_specifierForFamilyMember:(id)a0;
- (id)_getFamilyShare;
- (id)_generatePrefDictionaryForMember:(id)a0;
- (id)_generateFamilyPreferencesArray;
- (id)_getFamilyMembers;
- (id)_joinOption:(id)a0;
- (void)_resetFamilyPreferences;
- (void)_setFamilyPreferences;
- (void)_setFamilyShare:(id)a0;
- (void)_setJoinOption:(id)a0 specifier:(id)a1;
- (BOOL)_shouldShareHotspotWithFamily;
- (id)_switchSpecifier;
- (void)_updateMemberWithMember:(id)a0;

@end

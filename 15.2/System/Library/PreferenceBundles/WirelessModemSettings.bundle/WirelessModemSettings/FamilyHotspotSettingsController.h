@class NSArray, PSSpecifier;

@interface FamilyHotspotSettingsController : PSListController

@property (retain, nonatomic) NSArray *familyMembers;
@property (nonatomic) BOOL shouldShareWithFamily;
@property (retain, nonatomic) PSSpecifier *switchSpecifier;
@property (nonatomic) struct __WiFiManagerClient { } *wifiClient;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_specifierForFamilyMember:(id)a0;
- (id)_getFamilyMembers;
- (BOOL)_shouldShareHotspotWithFamily;
- (id)_switchSpecifier;
- (void)_setJoinOption:(id)a0 specifier:(id)a1;
- (id)_joinOption:(id)a0;
- (void)_updateMemberWithMember:(id)a0;
- (void)_setFamilyPreferences;
- (void)_setFamilyShare:(id)a0;
- (id)_getFamilyShare;
- (id)_generateFamilyPreferencesArray;
- (id)_generatePrefDictionaryForMember:(id)a0;
- (void)_resetFamilyPreferences;

@end

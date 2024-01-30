@class NSArray, NSOrderedSet, PSSpecifier, NSMutableDictionary, WBSPerSitePreference, PSConfirmationSpecifier, _SFPerSitePreferenceDisplayInformation, UIBarButtonItem;
@protocol WBSPerSitePreferenceManager;

@interface SafariPerSitePreferenceSettingsController : _SFPerSitePreferenceNotifyingListController {
    NSOrderedSet *_configuredWebsites;
    NSArray *_websiteSpecifiers;
    NSArray *_editableSpecifiers;
    BOOL _didSetUpSpecifierCaches;
    BOOL _hadConfiguredWebsites;
    PSSpecifier *_cachedWebsiteSectionHeaderSpecifier;
    PSSpecifier *_cachedOtherWebsitesSpecifier;
    PSConfirmationSpecifier *_cachedClearAllSettingsSpecifier;
    NSArray *_cachedOtherWebsitesMultipleChoiceSpecifiers;
    NSArray *_cachedOtherWebsitesSectionSpecifiers;
    NSArray *_cachedClearAllSettingsSectionSpecifiers;
    NSMutableDictionary *_specifierToPreferenceValueCache;
    NSArray *_cachedPreferenceValues;
    id _cachedFallbackPreferenceValue;
    _SFPerSitePreferenceDisplayInformation *_cachedDisplayInformation;
    UIBarButtonItem *_cachedCancelBarButtonItem;
    UIBarButtonItem *_cachedDeleteBarButtonItem;
}

@property (readonly, nonatomic) id<WBSPerSitePreferenceManager> preferenceManager;
@property (readonly, nonatomic) WBSPerSitePreference *preference;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)_cancelEditing:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (id)_cancelBarButtonItem;
- (id)_deleteBarButtonItem;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)perSitePreferenceValueDidChange;
- (void)_setUpSpecifiersCachesIfNeeded;
- (id)_specifiersForDomains:(id)a0;
- (id)_editableSpecifiersForDomains:(id)a0;
- (void)_loadDomains;
- (void)_updateDeleteButtonEnabled;
- (void)_setPreferenceValue:(id)a0 forSpecifier:(id)a1;
- (id)_preferenceValueForSpecifier:(id)a0;
- (id)_preferenceSpecifierNamed:(id)a0 set:(SEL)a1 get:(SEL)a2;
- (id)_displayInformation;
- (id)_preferenceValues;
- (void)_didRetrieveValue:(id)a0 forSpecifier:(id)a1;
- (id)_fallbackPreferenceValue;
- (void)_clearSettingsForDomains:(id)a0;
- (void)_setUpConstantSpecifiers;
- (void)_setDefaultPreferenceValue:(id)a0 forSpecifier:(id)a1;
- (id)_getDefaultPreferenceValueForSpecifier:(id)a0;
- (void)_clearAllSettings:(id)a0;
- (void)_clearSelectedDomains:(id)a0;
- (id)_defaultPreferenceValueForMultipleOptionSpecifier:(id)a0;
- (id)_otherWebsitesSpecifier;
- (id)_clearAllSettingsSpecifier;

@end

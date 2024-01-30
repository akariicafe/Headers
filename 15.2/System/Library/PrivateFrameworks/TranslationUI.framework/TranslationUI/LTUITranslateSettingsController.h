@class PSSpecifier;

@interface LTUITranslateSettingsController : PSListController {
    PSSpecifier *onDeviceOnlyGroup;
}

- (id)specifiers;
- (BOOL)isOnDeviceOnlyTranslationForced;
- (void).cxx_destruct;
- (void)showTranslatePrivacy;
- (id)onDeviceOnlyFooterString;
- (void)setAppGroupUserDefaultsEnabled:(id)a0 specifier:(id)a1;
- (id)appGroupUserDefaultForSpecifier:(id)a0;
- (void)openAppToLanguages:(id)a0;

@end

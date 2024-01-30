@class NSArray;

@interface PUIPhotosPrivacyController : PSListController

@property (retain, nonatomic) NSArray *appSpecifiers;

+ (BOOL)isServiceRestricted:(id)a0;

- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1 showPhotosAccess:(BOOL)a2 showPhotosAddAccess:(BOOL)a3;
- (id)_photosStatus:(id)a0;
- (void)_setPhotosStatus:(id)a0 specifier:(id)a1;
- (void)setTCCForService:(struct __CFString { } *)a0 appIdentifier:(id)a1 value:(int)a2;
- (void)getAuthorizationStatesForService:(struct __CFString { } *)a0 allowedArray:(id *)a1 limitedArray:(id *)a2 deniedArray:(id *)a3;
- (void).cxx_destruct;
- (id)specifiers;
- (void)updateSpecifiersForImposedSettings;
- (id)getEnabledAppsForService:(struct __CFString { } *)a0;

@end

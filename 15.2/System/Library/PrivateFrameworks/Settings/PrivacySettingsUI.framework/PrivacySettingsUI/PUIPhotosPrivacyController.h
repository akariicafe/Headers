@class NSSet, NSArray;

@interface PUIPhotosPrivacyController : PSListController

@property (retain, nonatomic) NSSet *photosReadWriteAllowedAppIDs;
@property (retain, nonatomic) NSSet *photosReadWriteLimitedAppIDs;
@property (retain, nonatomic) NSSet *photosReadWriteDeniedAppIDs;
@property (retain, nonatomic) NSSet *photosAddOnlyAllowedAppIDs;
@property (retain, nonatomic) NSSet *photosAddOnlyDeniedAppIDs;
@property (retain, nonatomic) NSSet *photosReadWriteAllowedOrLimitedAppIDs;
@property (retain, nonatomic) NSSet *photosReadWriteAllAppIDs;
@property (retain, nonatomic) NSSet *photosAddOnlyAllAppIDs;
@property (retain, nonatomic) NSSet *photosAllAppIDs;
@property (retain, nonatomic) NSArray *photoKitAppSpecifiers;

+ (void)setTCCForService:(struct __CFString { } *)a0 appIdentifier:(id)a1 value:(int)a2;
+ (BOOL)isServiceRestricted:(id)a0;

- (id)specifiers;
- (id)_photosStatus:(id)a0;
- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1 showPhotosAccess:(BOOL)a2 showPhotosAddAccess:(BOOL)a3;
- (void)_setPhotosStatus:(id)a0 specifier:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)updateSpecifiersForImposedSettings;
- (void)_updatePhotosAuthorizationStates;

@end

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

+ (BOOL)isServiceRestricted:(id)a0;
+ (void)setTCCForService:(struct __CFString { } *)a0 appIdentifier:(id)a1 value:(int)a2;

- (id)specifiers;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_photosStatus:(id)a0;
- (void)_setPhotosStatus:(id)a0 specifier:(id)a1;
- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1 showPhotosAccess:(BOOL)a2 showPhotosAddAccess:(BOOL)a3;
- (void)_updatePhotosAuthorizationStates;
- (void)updateSpecifiersForImposedSettings;

@end

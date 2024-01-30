@interface PSPhotosPolicyController : NSObject

- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1 showPhotosAccess:(BOOL)a2 showPhotosAddAccess:(BOOL)a3;
- (id)_photosStatus:(id)a0;
- (void)_setPhotosStatus:(id)a0 specifier:(id)a1;
- (void)setTCCForService:(struct __CFString { } *)a0 appIdentifier:(id)a1 value:(int)a2;
- (void)getAuthorizationStatesForService:(struct __CFString { } *)a0 allowedArray:(id *)a1 limitedArray:(id *)a2 deniedArray:(id *)a3;
- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1;

@end

@class _SFGeolocationPermissionManager;

@interface SafariLocationPerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {
    _SFGeolocationPermissionManager *_geolocationPermissionManager;
}

- (id)preference;
- (void).cxx_destruct;
- (id)preferenceManager;

@end

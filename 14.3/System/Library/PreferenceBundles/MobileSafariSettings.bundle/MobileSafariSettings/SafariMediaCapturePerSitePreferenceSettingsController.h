@class _SFUserMediaPermissionController;

@interface SafariMediaCapturePerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {
    _SFUserMediaPermissionController *_userMediaPermissionController;
}

- (id)preference;
- (void).cxx_destruct;
- (void)perSitePreferenceValueDidChange;
- (void)notifyPerSitePreferenceValueDidChange;
- (id)preferenceManager;

@end

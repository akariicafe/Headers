@class _SFRequestDesktopSitePreferenceManager;

@interface SafariRequestDesktopSitePerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {
    _SFRequestDesktopSitePreferenceManager *_requestDesktopSitePreferenceManager;
}

- (id)preference;
- (void).cxx_destruct;
- (void)notifyPerSitePreferenceValueDidChange;
- (id)preferenceManager;

@end

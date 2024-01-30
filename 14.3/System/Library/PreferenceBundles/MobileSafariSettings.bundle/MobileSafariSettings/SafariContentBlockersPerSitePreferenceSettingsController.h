@class _SFContentBlockersPreferenceManager;

@interface SafariContentBlockersPerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {
    _SFContentBlockersPreferenceManager *_contentBlockersPreferenceManager;
}

- (id)preference;
- (void).cxx_destruct;
- (void)dealloc;
- (id)preferenceManager;

@end

@class WBSAutomaticReaderActivationManager;

@interface SafariReaderPerSitePreferenceSettingsController : SafariPerSitePreferenceSettingsController {
    WBSAutomaticReaderActivationManager *_automaticReaderActivationManager;
}

- (id)preference;
- (void).cxx_destruct;
- (id)preferenceManager;

@end

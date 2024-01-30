@class WBSStartPageSectionManager;
@protocol WBSUserDefaultObservation;

@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    id<WBSUserDefaultObservation> _wallpaperDefaultsObservation;
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

- (void)_didUpdateStartPageSectionOrder:(id)a0;
- (BOOL)syncEnabled;
- (void)_didUpdateStartPageBackgroundImageVisibility;
- (id)startPageSectionsManager;
- (void)_didUpdateStartPageVisibility:(id)a0;
- (id)_sectionIdentifierToSettingName:(id)a0;
- (void)_backgroundImageChanged:(id)a0;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)a0;
- (void)_customizationPaletteWasDismissed:(id)a0;
- (void)_cloudSettingsDidUpdateOnServer:(id)a0;

@end

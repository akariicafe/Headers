@class WBSStartPageSectionManager;
@protocol WBSUserDefaultObservation;

@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    id<WBSUserDefaultObservation> _wallpaperDefaultsObservation;
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

- (id)_sectionIdentifierToSettingName:(id)a0;
- (void)_backgroundImageChanged:(id)a0;
- (BOOL)syncEnabled;
- (void)_didUpdateStartPageVisibility:(id)a0;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)a0;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)a0;
- (id)startPageSectionsManager;
- (void)_customizationPaletteWasDismissed:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibility;
- (id)init;
- (void)_cloudSettingsDidUpdateOnServer:(id)a0;
- (void)_didUpdateStartPageSectionOrder:(id)a0;
- (void).cxx_destruct;

@end

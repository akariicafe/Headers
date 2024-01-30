@class _SFAppInfoOverlayPreferenceManager, _SFGeolocationPermissionManager, WBSAutomaticReaderActivationManager, NSMutableDictionary, _SFContentBlockersPreferenceManager, _SFRequestDesktopSitePreferenceManager, _SFUserMediaPermissionController, _SFPageZoomPreferenceManager;

@interface _SFPerSitePreferencesVendor : NSObject {
    NSMutableDictionary *_preferenceToManager;
}

@property (readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager;
@property (readonly, nonatomic) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager;
@property (readonly, nonatomic) _SFUserMediaPermissionController *sharedUserMediaPermissionController;
@property (readonly, nonatomic) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager;
@property (readonly, nonatomic) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomPreferenceManager;
@property (readonly, nonatomic) _SFAppInfoOverlayPreferenceManager *appInfoOverlayPreferenceManager;

- (id)managerForPreference:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class _SFRequestDesktopSitePreferenceManager, _SFPageZoomPreferenceManager, _SFContentBlockersPreferenceManager, NSMutableDictionary, _SFUserMediaPermissionController, _SFGeolocationPermissionManager, WBSAutomaticReaderActivationManager;

@interface _SFPerSitePreferencesVendor : NSObject {
    NSMutableDictionary *_preferenceToManager;
}

@property (readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager;
@property (readonly, nonatomic) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager;
@property (readonly, nonatomic) _SFUserMediaPermissionController *sharedUserMediaPermissionController;
@property (readonly, nonatomic) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager;
@property (readonly, nonatomic) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomPreferenceManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)managerForPreference:(id)a0;

@end

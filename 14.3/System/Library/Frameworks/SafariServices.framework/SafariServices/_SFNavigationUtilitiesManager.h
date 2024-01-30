@class NSNumber, _SFPerSitePreferencesVendor, _SFReloadOptionsController;

@interface _SFNavigationUtilitiesManager : NSObject {
    _SFPerSitePreferencesVendor *_preferencesVendor;
    NSNumber *_cachedPlayingPauseQuirkEnabled;
    NSNumber *_cachedPerDocumentAutoplayBehaviorQuirkEnabled;
}

@property (weak, nonatomic) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic) unsigned long long persona;

- (BOOL)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)a0;
- (void).cxx_destruct;
- (void)_applyAutoplayQuirksToWebsitePolicies:(id)a0 desktopSiteSetting:(long long)a1;
- (void)websitePoliciesForURL:(id)a0 isForMainFrameNavigation:(BOOL)a1 navigationType:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithPerSitePreferencesVendor:(id)a0;

@end

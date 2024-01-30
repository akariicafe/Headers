@class NSNumber, _SFPerSitePreferencesVendor, _SFReloadOptionsController;
@protocol _SFBrowserDocument;

@interface _SFNavigationUtilitiesManager : NSObject {
    _SFPerSitePreferencesVendor *_preferencesVendor;
    NSNumber *_cachedPlayingPauseQuirkEnabled;
    NSNumber *_cachedPerDocumentAutoplayBehaviorQuirkEnabled;
}

@property (weak, nonatomic) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic) long long persona;
@property (weak, nonatomic) id<_SFBrowserDocument> browserDocument;

+ (id)_sharedUserAgentQuirksManager;

- (void)_applyAutoplayQuirksToWebsitePolicies:(id)a0 desktopSiteSetting:(long long)a1;
- (BOOL)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)a0;
- (id)initWithPerSitePreferencesVendor:(id)a0;
- (void)websitePoliciesForURL:(id)a0 isForMainFrameNavigation:(BOOL)a1 navigationType:(long long)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end

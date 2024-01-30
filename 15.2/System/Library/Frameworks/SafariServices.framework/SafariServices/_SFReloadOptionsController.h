@class NSString, _SFInjectedJavaScriptController, NSMutableDictionary, NSDictionary, NSMutableSet, _SFRequestDesktopSitePreferenceManager, NSNumber, WKWebView;

@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver> {
    _SFRequestDesktopSitePreferenceManager *_perSitePreferenceManager;
    NSDictionary *_perSitePreferenceValues;
    NSNumber *_requestDesktopSiteDefaultValue;
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    NSMutableSet *_domainsOverridenAsMobile;
    WKWebView *_webView;
}

@property (readonly, nonatomic) _SFInjectedJavaScriptController *activityJSController;
@property (readonly, nonatomic) BOOL loadedUsingDesktopUserAgent;
@property (nonatomic) BOOL tryUsingMobileIfPossible;
@property (nonatomic) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateRequestDesktopSiteDefaultValue:(long long)a0;
- (void)_loadPerSitePreferences;
- (id)initWithWebView:(id)a0 activityJSController:(id)a1 perSitePreferenceManager:(id)a2;
- (void)requestDesktopSite;
- (void)requestStandardSite;
- (id)customUserAgentForSetting:(long long)a0;
- (void)didUpdateRequestDesktopSitePerSitePreference:(id)a0;
- (void)_overrideSettingIfNeeded:(long long)a0 source:(unsigned long long)a1 domain:(id)a2 completion:(id /* block */)a3;
- (void)logCompletedPageloadToDifferentialPrivacy:(id)a0;
- (id)customNavigatorPlatformForSetting:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)a0;
- (void)requestDesktopSiteWithURL:(id)a0;
- (void)invalidate;
- (BOOL)_updateSettingSource:(unsigned long long)a0 domain:(id)a1;
- (void)didSetRequestDesktopSitePerSitePreferencesValues:(id)a0;
- (void)didMarkURLAsNeedingStandardUserAgent:(id)a0;
- (void)didSetRequestDesktopSiteDefaultValue:(long long)a0;
- (void)customUserAgentSettingForMainFrameURL:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;

@end

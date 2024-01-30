@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[152]; } data; } _websitePolicies;
    struct unique_ptr<WebKit::WebPagePreferencesLockdownModeObserver, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct __compressed_pair<WebKit::WebPagePreferencesLockdownModeObserver *, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct WebPagePreferencesLockdownModeObserver *__value_; } __ptr_; } _lockdownModeObserver;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setCaptivePortalModeEnabled:(BOOL)a0;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (unsigned long long)_modalContainerObservationPolicy;
- (id)_websiteDataStore;
- (void)_setNetworkConnectionIntegrityEnabled:(BOOL)a0;
- (id).cxx_construct;
- (id)_customNavigatorPlatform;
- (id)_activeContentRuleListActionPatterns;
- (unsigned long long)_colorSchemePreference;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (BOOL)_captivePortalModeEnabled;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (unsigned long long)_popUpPolicy;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (BOOL)_networkConnectionIntegrityEnabled;
- (unsigned long long)_allowedAutoplayQuirks;
- (id)_customHeaderFields;
- (BOOL)_contentBlockersEnabled;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (void)_setAllowPrivacyProxy:(BOOL)a0;
- (void)dealloc;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (void)_setUserContentController:(id)a0;
- (BOOL)_allowPrivacyProxy;
- (unsigned long long)_mouseEventPolicy;
- (void)_setWebsiteDataStore:(id)a0;
- (id)init;
- (id)_userContentController;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)a0;
- (void)_setCustomHeaderFields:(id)a0;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (long long)_autoplayPolicy;
- (id)_customUserAgent;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (void)_setCustomUserAgent:(id)a0;

@end

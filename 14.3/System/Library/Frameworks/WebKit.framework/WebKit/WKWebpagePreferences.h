@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[144]; } data; } _websitePolicies;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (id)init;
- (void)dealloc;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setUserContentController:(id)a0;
- (unsigned long long)_mouseEventPolicy;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (BOOL)_contentBlockersEnabled;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (id)_websiteDataStore;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (void)_setWebsiteDataStore:(id)a0;
- (id)_customHeaderFields;
- (unsigned long long)_popUpPolicy;
- (void)_setCustomUserAgent:(id)a0;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (id)_customNavigatorPlatform;
- (void)_setCustomHeaderFields:(id)a0;
- (id)_customUserAgent;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (id)_userContentController;
- (unsigned long long)_allowedAutoplayQuirks;
- (long long)_autoplayPolicy;

@end

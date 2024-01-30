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

- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setCustomHeaderFields:(id)a0;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (unsigned long long)_allowedAutoplayQuirks;
- (id)_websiteDataStore;
- (unsigned long long)_mouseEventPolicy;
- (long long)_autoplayPolicy;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (void)_setUserContentController:(id)a0;
- (unsigned long long)_popUpPolicy;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (id)init;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (id)_userContentController;
- (id)_customUserAgent;
- (id)_customNavigatorPlatform;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (void)_setCustomUserAgent:(id)a0;
- (void)dealloc;
- (id)_customHeaderFields;
- (BOOL)_contentBlockersEnabled;
- (void)_setWebsiteDataStore:(id)a0;

@end

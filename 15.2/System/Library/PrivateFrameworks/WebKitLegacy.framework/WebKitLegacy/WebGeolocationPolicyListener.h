@class NSString;

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> { struct Geolocation *m_ptr; } _geolocation;
    struct RetainPtr<WebView> { void *m_ptr; } _webView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deny;
- (void)allow;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGeolocation:(struct NakedPtr<WebCore::Geolocation> { struct Geolocation *x0; })a0 forWebView:(id)a1;

@end

@class NSString;

@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> { struct Geolocation *m_ptr; } m_geolocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGeolocation:(struct NakedRef<WebCore::Geolocation> { struct Geolocation *x0; })a0;
- (void)initializationAllowedWebView:(id)a0;
- (void)initializationDeniedWebView:(id)a0;

@end

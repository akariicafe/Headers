@class NSString;
@protocol _WKGeolocationCoreLocationListener;

@interface WKLegacyCoreLocationProvider : NSObject <_WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener> {
    id<_WKGeolocationCoreLocationListener> _listener;
    struct RetainPtr<WebGeolocationCoreLocationProvider> { void *m_ptr; } _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setListener:(id)a0;
- (void)start;
- (void)setEnableHighAccuracy:(BOOL)a0;
- (void)requestGeolocationAuthorization;
- (void)positionChanged:(void *)a0;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)errorOccurred:(id)a0;
- (void)resetGeolocation;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;

@end

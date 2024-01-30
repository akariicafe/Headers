@class WebGeolocationProviderIOS;

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {
    WebGeolocationProviderIOS *_provider;
}

- (id)initWithProvider:(id)a0;
- (void)positionChanged:(void *)a0;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)errorOccurred:(id)a0;
- (void)resetGeolocation;

@end

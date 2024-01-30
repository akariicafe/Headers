@class WebGeolocationProviderIOS;

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {
    WebGeolocationProviderIOS *_provider;
}

- (id)initWithProvider:(id)a0;
- (void)positionChanged:(struct GeolocationPositionData { double x0; double x1; double x2; double x3; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x4; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x5; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x6; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x7; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x8; } *)a0;
- (void)geolocationAuthorizationGranted;
- (void)errorOccurred:(id)a0;
- (void)geolocationAuthorizationDenied;
- (void)resetGeolocation;

@end

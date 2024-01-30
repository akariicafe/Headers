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
- (void).cxx_destruct;
- (void)stop;
- (id).cxx_construct;
- (void)setEnableHighAccuracy:(BOOL)a0;
- (void)requestGeolocationAuthorization;
- (void)positionChanged:(struct GeolocationPositionData { double x0; double x1; double x2; double x3; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x4; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x5; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x6; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x7; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x8; } *)a0;
- (void)geolocationAuthorizationGranted;
- (void)errorOccurred:(id)a0;
- (void)geolocationAuthorizationDenied;
- (void)resetGeolocation;
- (void)start;

@end

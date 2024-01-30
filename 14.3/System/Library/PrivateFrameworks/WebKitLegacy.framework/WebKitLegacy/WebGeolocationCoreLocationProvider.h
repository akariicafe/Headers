@class NSString;
@protocol WebGeolocationCoreLocationUpdateListener;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {
    id<WebGeolocationCoreLocationUpdateListener> _positionListener;
    struct RetainPtr<CLLocationManager> { void *m_ptr; } _locationManager;
    BOOL _isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)sendLocation:(id)a0;
- (id).cxx_construct;
- (void)setEnableHighAccuracy:(BOOL)a0;
- (void)requestGeolocationAuthorization;
- (id)initWithListener:(id)a0;
- (void)start;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)createLocationManager;

@end

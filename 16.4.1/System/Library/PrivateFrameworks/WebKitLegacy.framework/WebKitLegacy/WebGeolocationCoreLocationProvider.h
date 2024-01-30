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

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id).cxx_construct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)setEnableHighAccuracy:(BOOL)a0;
- (void)requestGeolocationAuthorization;
- (id)initWithListener:(id)a0;
- (void)createLocationManager;
- (void)sendLocation:(id)a0;

@end

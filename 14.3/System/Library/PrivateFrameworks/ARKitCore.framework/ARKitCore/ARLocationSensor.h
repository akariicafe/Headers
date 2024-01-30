@class ARLocationData, NSString, CLLocationManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, ARSensorDelegate;

@interface ARLocationSensor : NSObject <CLLocationManagerDelegate, ARSensor> {
    NSString *_bundleIdentifier;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationManagerQueue;
    double _lastVIOUpdateTimestamp;
    NSMutableArray *_altitudeSkipTiles;
    id<ARSensorDelegate> _delegate;
}

@property (retain, nonatomic) ARLocationData *currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithBundleIdentifier:(id)a0;
- (void)start;
- (id)_createLocationManager;
- (unsigned long long)providedDataTypes;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)updateEstimationFromVIOPose:(id)a0 imageData:(id)a1;
- (void)updateFromVisualLocalizationResult:(id)a0;
- (id)_validateLocationAuthorization;
- (void)_attemptAltitudeLookupAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 attemptCount:(unsigned int)a1 lookupStartDate:(id)a2 completionHandler:(id /* block */)a3;

@end

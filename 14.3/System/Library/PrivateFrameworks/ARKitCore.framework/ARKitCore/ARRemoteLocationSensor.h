@class ARLocationData, NSString;
@protocol ARSensorDelegate;

@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>

@property (readonly, nonatomic) ARLocationData *currentLocation;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (unsigned long long)providedDataTypes;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)updateEstimationFromVIOPose:(id)a0 imageData:(id)a1;
- (void)updateFromVisualLocalizationResult:(id)a0;
- (id)initWithServerConnection:(id)a0;

@end

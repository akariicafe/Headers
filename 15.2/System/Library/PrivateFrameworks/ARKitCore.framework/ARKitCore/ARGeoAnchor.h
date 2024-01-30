@class NSString;

@interface ARGeoAnchor : ARAnchor <ARDaemonSecureCoding, ARTrackable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isAltitudeAvailable;
@property (nonatomic) BOOL isAltitudeLookupInProgress;
@property (readonly, nonatomic) double undulation;
@property (nonatomic) BOOL isTracked;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationLLA;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationECEF;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ecefFromAnchor;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) long long altitudeSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 altitudeSource:(long long)a2 isAltitudeAvailable:(BOOL)a3 undulation:(double)a4;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1;
- (id)initWithName:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)initWithName:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 altitude:(double)a2;

@end

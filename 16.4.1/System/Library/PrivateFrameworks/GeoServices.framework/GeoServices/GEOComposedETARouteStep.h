@class GEOTimeCheckpoints, NSString;

@interface GEOComposedETARouteStep : NSObject <GEOComposedRouteStepTravelTimeProvider, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long stepID;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } routeCoordinateRange;
@property (nonatomic) double travelDuration;
@property (nonatomic) double length;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)distance;
- (double)travelTime;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithPrecision:(unsigned long long)a0;

@end

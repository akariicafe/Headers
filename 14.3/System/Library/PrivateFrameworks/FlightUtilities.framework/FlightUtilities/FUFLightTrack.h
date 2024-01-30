@class MKGeodesicPolyline, FUFlightLeg;

@interface FUFLightTrack : NSObject

@property (retain) MKGeodesicPolyline *polyline;
@property (retain) FUFlightLeg *leg;

- (void).cxx_destruct;

@end

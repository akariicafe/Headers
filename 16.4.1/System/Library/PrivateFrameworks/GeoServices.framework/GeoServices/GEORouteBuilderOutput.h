@class NSArray, GEOElevationProfile, GEOComposedRouteCoordinateArray, GEOMapRegion, GEOComposedRouteCellularCoverage;

@interface GEORouteBuilderOutput : NSObject

@property (retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray;
@property (retain, nonatomic) NSArray *legs;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) NSArray *guidanceEvents;
@property (retain, nonatomic) NSArray *enrouteNotices;
@property (retain, nonatomic) NSArray *visualInfos;
@property (retain, nonatomic) NSArray *cameraInfos;
@property (retain, nonatomic) GEOComposedRouteCellularCoverage *cellularCoverage;
@property (nonatomic) BOOL usesZilch;
@property (retain, nonatomic) NSArray *pointSections;
@property (retain, nonatomic) GEOMapRegion *boundingMapRegion;
@property (nonatomic) double distance;
@property (retain, nonatomic) GEOElevationProfile *elevationProfile;

- (void).cxx_destruct;

@end

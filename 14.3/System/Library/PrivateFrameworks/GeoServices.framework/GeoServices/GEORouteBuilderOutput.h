@class NSArray, GEOElevationProfile, GEOComposedRouteCoordinateArray, GEOMapRegion;

@interface GEORouteBuilderOutput : NSObject

@property (retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray;
@property (retain, nonatomic) NSArray *legs;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) NSArray *guidanceEvents;
@property (retain, nonatomic) NSArray *enrouteNotices;
@property (nonatomic) BOOL usesZilch;
@property (retain, nonatomic) NSArray *pointSections;
@property (retain, nonatomic) GEOMapRegion *boundingMapRegion;
@property (nonatomic) unsigned int distance;
@property (readonly, nonatomic) GEOElevationProfile *elevationProfile;

- (void).cxx_destruct;

@end

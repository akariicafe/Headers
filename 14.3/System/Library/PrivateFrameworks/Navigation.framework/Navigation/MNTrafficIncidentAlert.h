@class NSData, NSString, NSArray, NSDate, GEOComposedRoute, GEONavigabilityInfo, GEOTrafficBannerText, MNActiveRouteInfo, NSMutableArray, GEORouteIncident;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {
    GEOTrafficBannerText *_geoTrafficBannerText;
    NSArray *_buttonActionTitles;
    double _alertDisplayDuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double newEstimatedTime;
@property (readonly, nonatomic) double oldEstimatedTime;
@property (readonly, nonatomic) double oldHistoricTime;
@property (readonly, nonatomic) NSMutableArray *oldRouteIncidents;
@property (readonly, nonatomic) NSData *alertID;
@property (readonly, nonatomic) NSData *etaResponseID;
@property (readonly, nonatomic) unsigned long long alertType;
@property (readonly, nonatomic) BOOL shouldShowTimer;
@property (readonly, nonatomic) NSString *bannerDescription;
@property (nonatomic) double distanceToIncident;
@property (retain, nonatomic) NSDate *eta;
@property (readonly, nonatomic) NSArray *alertTitles;
@property (readonly, nonatomic) NSArray *alertDescriptions;
@property (readonly, nonatomic) NSArray *spokenTexts;
@property (readonly, nonatomic) GEORouteIncident *incident;
@property (readonly, nonatomic) MNActiveRouteInfo *mainRouteInfo;
@property (readonly, nonatomic) GEOComposedRoute *originalRoute;
@property (readonly, nonatomic) GEONavigabilityInfo *originalRouteNavigability;
@property (readonly, nonatomic) MNActiveRouteInfo *alternateRouteInfo;
@property (readonly, nonatomic) GEOComposedRoute *alternateRoute;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } startValidCoordinateRange;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } endValidCoordinateRange;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } incidentCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } alternateEndValidCoordinateRange;
@property (readonly, nonatomic) NSDate *alertDate;
@property (readonly, nonatomic) double alertDisplayDuration;
@property (readonly, nonatomic) BOOL isAutomaticReroute;
@property (readonly, nonatomic) BOOL isReroute;
@property (readonly, nonatomic) unsigned long long secondsSaved;
@property (readonly, nonatomic) int previousBannerChange;

+ (id)validTrafficIncidentAlertForMainRouteInfo:(id)a0 alternateRouteInfo:(id)a1;

- (void).cxx_destruct;
- (void)updateLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateAlertIDWithAlert:(id)a0;
- (id)_initWithGeoTrafficBannerText:(id)a0 mainRouteInfo:(id)a1 alternateRouteInfo:(id)a2;
- (id)_dynamicStringValues;
- (unsigned long long)_alertTypeForGeoBannerStyle:(int)a0;
- (void)_initRouteCoordinates;
- (void)_populateServerFields:(id)a0;
- (struct { unsigned int x0; float x1; })_routeCoordinateOnRoute:(id)a0 distanceFromEnd:(double)a1;
- (void)_populateButtonActionAndTitles:(id)a0;
- (id)buttonActionTitles;

@end

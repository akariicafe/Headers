@class NSData, NSString, NSArray, NSDate, GEOComposedRoute, GEONavigabilityInfo, GEOPBTransitArtwork, MNActiveRouteInfo, NSMutableArray, GEOTrafficBannerText, GEORouteIncident;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {
    GEOTrafficBannerText *_geoTrafficBannerText;
    NSArray *_buttonActionTitles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double newEstimatedTime;
@property (readonly, nonatomic) double oldEstimatedTime;
@property (readonly, nonatomic) double oldHistoricTime;
@property (readonly, nonatomic) NSMutableArray *oldRouteIncidents;
@property (readonly, nonatomic) NSData *alertID;
@property (readonly, nonatomic) NSData *etaResponseID;
@property (readonly, nonatomic) NSString *bannerID;
@property (readonly, nonatomic) unsigned long long alertType;
@property (readonly, nonatomic) BOOL shouldShowTimer;
@property (readonly, nonatomic) NSString *bannerDescription;
@property (nonatomic) double distanceToIncident;
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
@property (readonly, nonatomic) BOOL defaultToNewRoute;
@property (readonly, nonatomic) unsigned long long secondsSaved;
@property (readonly, nonatomic) int previousBannerChange;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSString *analyticsMessage;

+ (id)validTrafficIncidentAlertForMainRouteInfo:(id)a0 alternateRouteInfo:(id)a1;

- (void)updateLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dismissButtonTitle;
- (void)_populateButtonActionAndTitles:(id)a0;
- (id)_initWithGeoTrafficBannerText:(id)a0 mainRouteInfo:(id)a1 alternateRouteInfo:(id)a2;
- (unsigned long long)_alertTypeForGeoBannerStyle:(int)a0;
- (int)_buttonDisplayForAlertAction:(unsigned long long)a0;
- (id)_buttonTitleForAlertAction:(unsigned long long)a0;
- (id)_dynamicStringValues;
- (void)_initRouteCoordinates;
- (void)_populateServerFields:(id)a0;
- (id)_stringForAlertType:(unsigned long long)a0;
- (int)acceptButtonDisplay;
- (id)acceptButtonTitle;
- (id)buttonActionTitles;
- (int)dismissButtonDisplay;
- (void)updateAlertIDWithAlert:(id)a0;

@end

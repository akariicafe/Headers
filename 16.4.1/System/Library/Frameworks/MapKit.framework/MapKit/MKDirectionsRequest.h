@class NSDate, NSArray, GEOAutomobileOptions, GEOCyclingOptions, GEOWalkingOptions, GEOTransitOptions, MKMapItem;

@interface MKDirectionsRequest : NSObject <NSCopying> {
    unsigned long long _transportType;
    BOOL _requestsAlternateRoutes;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    long long _tollPreference;
    long long _highwayPreference;
}

@property (readonly, nonatomic) BOOL _includeTravelTimes;
@property (readonly, nonatomic) BOOL _includeTrafficIncidents;
@property (readonly, nonatomic) BOOL _includeRoutePoints;
@property (readonly, nonatomic) BOOL _resolveExtraAutomobileOptions;
@property (nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) BOOL includeDistanceInETA;
@property (retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested;
@property (nonatomic, getter=_useBackgroundURL, setter=_setUseBackgroundURL:) BOOL useBackgroundURL;
@property (retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions;
@property (retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic, getter=_cyclingOptions, setter=_setCyclingOptions:) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *source;
@property (retain, nonatomic) MKMapItem *destination;

+ (BOOL)isDirectionsRequestURL:(id)a0;

- (void)setTransportType:(unsigned long long)a0;
- (id)initWithContentsOfURL:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (unsigned long long)transportType;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)departureDate;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_transportType;
- (void)setArrivalDate:(id)a0;
- (id)_arrivalDate;
- (id)_departureDate;
- (id)_mapkit_initWithDictionaryRepresentation:(id)a0;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 arrivalDate:(id)a3;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 departureDate:(id)a3 includeTravelTimes:(BOOL)a4 includeTrafficIncidents:(BOOL)a5 includeRoutePoints:(BOOL)a6 resolveExtraAutomobileOptions:(BOOL)a7;
- (long long)highwayPreference;
- (BOOL)requestsAlternateRoutes;
- (void)setDepartureDate:(id)a0;
- (void)setHighwayPreference:(long long)a0;
- (void)setRequestsAlternateRoutes:(BOOL)a0;
- (void)setTollPreference:(long long)a0;
- (long long)tollPreference;

@end

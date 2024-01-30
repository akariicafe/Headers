@class NSDate, NSArray, GEOAutomobileOptions, GEOCyclingOptions, GEOWalkingOptions, GEOTransitOptions, MKMapItem;

@interface MKDirectionsRequest : NSObject <NSCopying> {
    unsigned long long _transportType;
    BOOL _requestsAlternateRoutes;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
}

@property (nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) BOOL includeDistanceInETA;
@property (retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested;
@property (readonly, nonatomic) BOOL _includeTypicalRouteDuration;
@property (readonly, nonatomic) BOOL _includeTravelTimes;
@property (readonly, nonatomic) BOOL _includeTrafficIncidents;
@property (readonly, nonatomic) BOOL _includeZilchRoutePoints;
@property (readonly, nonatomic) BOOL _includeBasicRoutePoints;
@property (readonly, nonatomic) BOOL _includeEntryPoints;
@property (readonly, nonatomic) BOOL _resolveExtraAutomobileOptions;
@property (retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions;
@property (retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic, getter=_cyclingOptions, setter=_setCyclingOptions:) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *source;
@property (retain, nonatomic) MKMapItem *destination;

+ (BOOL)isDirectionsRequestURL:(id)a0;

- (id)initWithContentsOfURL:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)setArrivalDate:(id)a0;
- (unsigned long long)_transportType;
- (id)init;
- (id)_arrivalDate;
- (void).cxx_destruct;
- (id)arrivalDate;
- (BOOL)requestsAlternateRoutes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTransportType:(unsigned long long)a0;
- (unsigned long long)transportType;
- (id)description;
- (void)setRequestsAlternateRoutes:(BOOL)a0;
- (void)setDepartureDate:(id)a0;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 arrivalDate:(id)a3;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 departureDate:(id)a3;
- (id)_mapkit_initWithDictionaryRepresentation:(id)a0;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 arrivalDate:(id)a3 includeTravelTimes:(BOOL)a4 includeTrafficIncidents:(BOOL)a5 includeEntryPoints:(BOOL)a6 includeRoutePoints:(BOOL)a7;
- (id)_mapkit_initWithAllTransportTypesSource:(id)a0 destination:(id)a1 departureDate:(id)a2;
- (id)_mapkit_initWithAllTransportTypesSource:(id)a0 destination:(id)a1 arrivalDate:(id)a2;
- (id)dictionaryRepresentation;
- (id)departureDate;
- (id)_departureDate;
- (id)_mapkit_initWithSource:(id)a0 destination:(id)a1 transportType:(unsigned long long)a2 departureDate:(id)a3 includeTravelTimes:(BOOL)a4 includeTrafficIncidents:(BOOL)a5 includeEntryPoints:(BOOL)a6 includeRoutePoints:(BOOL)a7 resolveExtraAutomobileOptions:(BOOL)a8;

@end

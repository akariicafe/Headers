@class NSDate, NSString, NSArray, GEOAutomobileOptions, GEOWalkingOptions, GEOTransitOptions, GEOComposedWaypoint, GEOLocation, GEOCyclingOptions;

@interface GEOQuickETARequest : NSObject

@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (readonly, nonatomic) GEOComposedWaypoint *sourceWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint;
@property (readonly, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) NSDate *arrivalDate;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) GEOLocation *currentLocation;
@property (readonly, nonatomic) BOOL includeDistance;
@property (readonly, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) GEOWalkingOptions *walkingOptions;
@property (readonly, nonatomic) NSArray *additionalTransportTypesRequested;

- (id)initWithSource:(id)a0 toDestination:(id)a1 departureDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5 additionalTransportTypesRequested:(id)a6 automobileOptions:(id)a7 transitOptions:(id)a8 walkingOptions:(id)a9 cyclingOptions:(id)a10;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 currentLocation:(id)a3 includeDistance:(BOOL)a4 automobileOptions:(id)a5 transitOptions:(id)a6 walkingOptions:(id)a7 cyclingOptions:(id)a8;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5 additionalTransportTypesRequested:(id)a6 automobileOptions:(id)a7 transitOptions:(id)a8 walkingOptions:(id)a9 cyclingOptions:(id)a10;
- (id)initWithSource:(id)a0 toDestination:(id)a1 departureDate:(id)a2 currentLocation:(id)a3 includeDistance:(BOOL)a4 automobileOptions:(id)a5 transitOptions:(id)a6 walkingOptions:(id)a7 cyclingOptions:(id)a8;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5 additionalTransportTypesRequested:(id)a6;
- (id)initWithSource:(id)a0 toDestination:(id)a1 departureDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5 additionalTransportTypesRequested:(id)a6;
- (id)description;
- (id)_defaultRequestingAppIdentifier;
- (id)initWithSource:(id)a0 toDestination:(id)a1 departureDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4 includeDistance:(BOOL)a5;
- (id)initWithSource:(id)a0 toDestination:(id)a1 departureDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 transportType:(int)a3 currentLocation:(id)a4;

@end

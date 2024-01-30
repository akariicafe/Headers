@class NSData, NSString, NSArray, GEOAutomobileOptions, NSDate, GEOURLRouteHandle, GEOWalkingOptions, GEOTransitOptions, GEOComposedWaypoint, GEOCyclingOptions;
@protocol MSPRouteInformationSource;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>

@property (copy, nonatomic) id<MSPRouteInformationSource> routeInformationSource;
@property (nonatomic, getter=navigationWasInterrupted) BOOL navigationInterrupted;
@property (readonly, nonatomic) long long transportType;
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) GEOWalkingOptions *walkingOptions;
@property (readonly, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL navigationWasInterrupted;
@property (readonly, nonatomic) NSData *archivedSharedTripData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)a0;
- (id)_routeRequestStorage;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end

@class NSString, GEOURLRouteHandle, NSDate, GEOComposedWaypoint;
@protocol MSPRouteInformationSource;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>

@property (copy, nonatomic) id<MSPRouteInformationSource> routeInformationSource;
@property (nonatomic, getter=navigationWasInterrupted) BOOL navigationInterrupted;
@property (readonly, nonatomic) long long transportType;
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) BOOL navigationWasInterrupted;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)_routeRequestStorage;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)a0;

@end

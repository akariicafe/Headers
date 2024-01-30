@class NSDate, NSString, NSArray, GEOComposedRoute, GEOPDTransitInfo, GEOPDTransitSchedule, NSTimeZone, NSMapTable;

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo> {
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    NSArray *_systems;
    NSArray *_lines;
    NSArray *_departureSequences;
    NSTimeZone *_timeZone;
    NSArray *_incidents;
    NSDate *_incidentExpirationDate;
    NSArray *_connections;
    NSString *_displayName;
    NSMapTable *_cachedHeadSignsForLine;
    struct { double latitude; double longitude; } _coordinate;
    NSArray *_transitStops;
    GEOComposedRoute *_composedRoute;
}

@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSArray *connections;
@property (readonly, nonatomic) NSArray *systems;
@property (readonly, nonatomic) unsigned long long systemsCount;
@property (readonly, nonatomic) NSArray *lines;
@property (readonly, nonatomic) unsigned long long linesCount;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isTransitIncidentsTTLExpired;
@property (readonly, nonatomic) BOOL hasTransitIncidentComponent;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *transitTripStops;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitInfo:(id)a0 schedule:(id)a1 timeZone:(id)a2 incidents:(id)a3 hasTransitIncidentComponent:(BOOL)a4 incidentExpirationDate:(id)a5 providerID:(int)a6 coordinate:(struct { double x0; double x1; })a7 transitStops:(id)a8 composedRoute:(id)a9;
- (id)_departureSequencesForSystem:(id)a0 excludingIncidentEntities:(id)a1 ignoreDirectionFilter:(BOOL)a2 direction:(id)a3 validForDateFromBlock:(id /* block */)a4;
- (id)directionsForSystem:(id)a0 excludingIncidentEntities:(id)a1 validForDateFromBlock:(id /* block */)a2 hasSequencesWithNoDirection:(out BOOL *)a3;
- (void).cxx_destruct;
- (id)linesForSystem:(id)a0;
- (id)departureSequencesForSystem:(id)a0 excludingIncidentEntities:(id)a1 direction:(id)a2 validForDateFromBlock:(id /* block */)a3;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)a0;
- (id)allSequencesForSystem:(id)a0 direction:(id)a1;
- (id)serviceResumesDateForLine:(id)a0 excludingIncidentEntities:(id)a1 afterDate:(id)a2 blocked:(out BOOL *)a3;
- (id)inactiveLinesForSystem:(id)a0 relativeToDateFromBlock:(id /* block */)a1 excludingIncidentEntities:(id)a2;
- (id)headSignsForLine:(id)a0;

@end

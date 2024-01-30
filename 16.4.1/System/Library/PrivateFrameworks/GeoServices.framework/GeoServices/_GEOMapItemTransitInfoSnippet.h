@class GEOComposedRoute, NSArray, NSString, NSDate, GEOPDTransitInfoSnippet;
@protocol GEOTransitNearbySchedule;

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    NSArray *_labelItems;
    NSString *_displayName;
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
@property (readonly, nonatomic) id<GEOTransitNearbySchedule> nearbySchedule;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)linesForSystem:(id)a0;
- (id)allSequencesForSystem:(id)a0 container:(id)a1;
- (id)allSequencesForSystem:(id)a0 direction:(id)a1;
- (id)departureSequenceContainersForSystem:(id)a0 excludingIncidentEntities:(id)a1 validForDateFromBlock:(id /* block */)a2;
- (id)departureSequencesForSystem:(id)a0 excludingIncidentEntities:(id)a1 container:(id)a2 validForDateFromBlock:(id /* block */)a3;
- (id)departureSequencesForSystem:(id)a0 excludingIncidentEntities:(id)a1 direction:(id)a2 validForDateFromBlock:(id /* block */)a3;
- (id)directionsForSystem:(id)a0 excludingIncidentEntities:(id)a1 validForDateFromBlock:(id /* block */)a2;
- (id)directionsForSystem:(id)a0 excludingIncidentEntities:(id)a1 validForDateFromBlock:(id /* block */)a2 hasSequencesWithNoDirection:(out BOOL *)a3;
- (id)headSignsForLine:(id)a0;
- (id)inactiveLinesForSystem:(id)a0 relativeToDateFromBlock:(id /* block */)a1 excludingIncidentEntities:(id)a2 usingContainers:(BOOL)a3;
- (id)initWithTransitInfoSnippet:(id)a0;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)a0;
- (id)serviceResumesResultForLine:(id)a0 excludingIncidentEntities:(id)a1 afterDate:(id)a2 usingContainers:(BOOL)a3;

@end

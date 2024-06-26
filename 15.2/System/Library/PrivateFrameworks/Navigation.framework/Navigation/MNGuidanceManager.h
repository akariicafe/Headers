@class NSMutableDictionary, MNGuidanceSignInfo, MNAnnouncementPlanEvent, MNLocation, NSDictionary, MNAnnouncementEngine, GEOComposedRoute, NSMutableArray, GEOComposedGuidanceEvent, NSString, NSMutableSet, NSArray, MNJunctionViewImageLoader;
@protocol MNGuidanceManagerDelegate;

@interface MNGuidanceManager : NSObject <MNTimeManagerObserver> {
    MNAnnouncementEngine *_announcementEngine;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary *_specialSpokenEvents;
    NSMutableDictionary *_specialSignEvents;
    NSMutableDictionary *_specialAREvents;
    GEOComposedRoute *_route;
    NSMutableArray *_events;
    NSDictionary *_eventIndexes;
    GEOComposedGuidanceEvent *_nextEvent;
    BOOL _hasBeenOnRouteOnce;
    BOOL _canSpeakReturnToRouteAnnouncement;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    BOOL _hasPersistentEvents;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    NSMutableDictionary *_hapticsTriggered;
    MNGuidanceSignInfo *_signInfo;
    NSArray *_arEvents;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
    MNJunctionViewImageLoader *_junctionViewImageLoader;
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
}

@property (readonly, nonatomic) NSArray *events;
@property (retain, nonatomic) MNLocation *location;
@property (nonatomic) double speed;
@property (weak, nonatomic) id<MNGuidanceManagerDelegate> delegate;
@property (nonatomic) BOOL isInPreArrivalState;
@property (nonatomic) BOOL shouldShowChargingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)updateDestination:(id)a0;
- (void)dealloc;
- (void)reset;
- (BOOL)_isValidEvent:(id)a0;
- (void)stop;
- (void)updateForReroute:(id)a0;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)_resetLastAnnouncementTime;
- (void)_initSpecialGuidanceEventsForRoute:(id)a0;
- (id)_specialSpokenEvents:(int)a0 forLegIndex:(unsigned long long)a1;
- (void)_markEventSpoken:(id)a0;
- (BOOL)_guidanceEventIsSpecial:(id)a0;
- (BOOL)_eventWasSpoken:(id)a0;
- (double)_adjustedVehicleSpeed;
- (void)_notifySpeechEvent:(id)a0 variant:(unsigned long long)a1 ignorePromptStyle:(BOOL)a2;
- (void)_filterValidEvents;
- (id)_junctionViewEvents;
- (double)_distanceToEndOfRoute;
- (void)_considerAnnouncements;
- (void)_considerHaptics;
- (void)_considerLaneGuidance;
- (void)_considerSignGuidance;
- (void)_considerPersistence;
- (void)_considerJunctionViewGuidance;
- (void)_considerARGuidance;
- (BOOL)_considerStartingAnnouncementsForLocation:(id)a0;
- (BOOL)_considerGetOnRouteAnnouncementsForLocation:(id)a0;
- (BOOL)_considerChargingAnnouncementsForLocation:(id)a0;
- (BOOL)_considerArrivalAnnouncementsForLocation:(id)a0;
- (BOOL)_considerOtherSpecialAnnouncementsForLocation:(id)a0;
- (void)_planAnnouncements;
- (id)_spokenEventsRemainingInStep;
- (id)_durationsForEvent:(id)a0;
- (double)_timeRemainingForEvent:(id)a0;
- (id)_selectAnnouncementForEvent:(id)a0 withTimeRemaining:(double)a1 withMinIndex:(unsigned long long)a2 selectedIndex:(out unsigned long long *)a3;
- (void)_notifyAnalyticsForNewEvents:(id)a0 previousEvents:(id)a1;
- (double)_distanceToManeuverStart;
- (double)_distanceToRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (id)_serverStringDictionaryForEvent:(id)a0 distance:(double)a1 validDistance:(double)a2 spoken:(BOOL)a3;
- (double)durationOfEvent:(id)a0 announcementIndex:(unsigned long long)a1 distance:(double)a2;
- (BOOL)_isEVChargingEvent:(id)a0;
- (id)_serverStringDictionaryForChargingEvent:(id)a0;
- (id)_nextLaneGuidanceEvent;
- (int)_indexForEventUUID:(id)a0;
- (id)_validEventsForSignGuidance:(out BOOL *)a0;
- (id)_sortedSignEventsFromValidSignEvents:(id)a0;
- (id)_signForGuidanceEvent:(id)a0 isPrimary:(BOOL)a1 shouldOverridePrimaryDistances:(BOOL)a2 distance:(out double *)a3;
- (id)_specialSignEvents:(int)a0 forLeg:(unsigned long long)a1;
- (id)_validEventsForARGuidance;
- (int)_maneuverTypeForAREvent:(id)a0;
- (double)_headingForArEvent:(id)a0;
- (id)_specialAREvents:(int)a0 forLeg:(unsigned long long)a1;
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)a0;
- (id)_closestContinueAREvent;
- (BOOL)_hasPersistentEvents;
- (id)_nextJunctionViewGuidanceEvent;
- (void)_handleJunctionViewInfo:(id)a0;
- (double)_timeUntilEventTrigger:(id)a0;
- (unsigned int)_trafficColorForRoute:(id)a0 traffic:(id)a1 distanceRemaining:(double)a2;
- (void)timeManagerDidChangeProvider:(id)a0;
- (id)initWithRouteInfo:(id)a0 andIsReconnecting:(BOOL)a1 announcementsToIgnore:(id)a2;
- (BOOL)repeatLastGuidanceAnnouncement:(id)a0;
- (void)updateGuidanceForLocation:(id)a0 navigatorState:(int)a1;

@end

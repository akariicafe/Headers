@class NSURL, GEODirectionsRequester;

@interface GEODirectionsService : NSObject {
    GEODirectionsRequester *_directionsRequester;
}

@property (class, readonly, nonatomic) GEODirectionsService *sharedService;

@property (readonly, nonatomic) NSURL *directionsURL;

+ (BOOL)_canCurrentVoiceLanguageHandleWrittenText;
+ (BOOL)canSpeakWrittenAddresses;
+ (BOOL)canSpeakWrittenPlaceNames;

- (id)init;
- (void).cxx_destruct;
- (id)_waypointsForRequestParameters:(id)a0;
- (id)_directionsRequestForRequestParameters:(id)a0 waypoints:(id)a1;
- (id)_feedbackForRequestParameters:(id)a0;
- (id)_geoOriginalWaypointRouteForRequestParameters:(id)a0 waypoints:(id)a1;
- (id)_geoOriginalWaypointRouteForResumeAfterPause:(id)a0 waypoints:(id)a1;
- (id)_geoWaypointTypedForWaypoint:(id)a0 voiceLanguage:(id)a1;
- (int)_routePurposeForRequestParameters:(id)a0;
- (void)_setMiscFieldsOnDirectionsRequest:(id)a0 forRequestParameters:(id)a1;
- (BOOL)_shouldAllowTimepointForRequestType:(unsigned long long)a0;
- (void)_submitDirectionsRequest:(id)a0 waypoints:(id)a1 auditToken:(id)a2 useBackgroundURL:(BOOL)a3 requestPriority:(long long)a4 allowRetry:(BOOL)a5 handler:(id /* block */)a6;
- (id)_waypointsForModifyWaypointsRequest:(id)a0;
- (id)_waypointsForRerouteWithWaypointsRequest:(id)a0;
- (id)requestDirections:(id)a0 handler:(id /* block */)a1;

@end

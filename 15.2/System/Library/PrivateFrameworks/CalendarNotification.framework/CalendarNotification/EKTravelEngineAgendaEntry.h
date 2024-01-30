@class NSData, EKTravelEngineHypothesis, NSString, CalGeocoder, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, NSObject, CLLocation;
@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;

@interface EKTravelEngineAgendaEntry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal;
@property (retain, nonatomic) EKTravelEngineThrottle *throttle;
@property (retain, nonatomic) CalGeocoder *geocoder;
@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> hypothesizerProvider;
@property (retain, nonatomic) id<CALNRouteHypothesizer> hypothesizer;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) BOOL geocodedEventEncountered;
@property (nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;
@property (nonatomic) long long travelTimeThresholdExceededState;
@property (nonatomic) double maximumTravelDurationEncountered;
@property (retain, nonatomic) NSString *agendaEntryIdentifier;
@property (readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ entrySignificantlyChangedBlock;
@property (nonatomic) BOOL dismissed;

+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;

- (void)receivedAlarmNamed:(id)a0;
- (void).cxx_destruct;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)dealloc;
- (void)reset;
- (void)_clearEverything;
- (void)requestHypothesisRefreshAtDate:(id)a0;
- (void)cancelHypothesisRefreshRequest;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)updateWithOriginalEvent:(id)a0;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)a0;
- (void)cancelEmissionHypothesisRefresh;
- (void)_enhanceLocation;
- (void)_hypothesisRefreshTimerFired;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)a0;
- (id)requestHypothesisRefreshAlarmName;
- (void)createAlarmWithName:(id)a0 atDate:(id)a1;
- (void)removeAlarmWithName:(id)a0;
- (id)emissionHypothesisRefreshAlarmName;
- (void)_performAnalyticsPostProcessing;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)a0;
- (void)_trackTTLCandidateEvent:(id)a0;
- (void)_requestHypothesisRefreshTimerFired;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_setUpRouteMonitoring;
- (id)_generateDestination;
- (id)_createSyntheticHypothesis;
- (void)_updateWithHypothesis:(id)a0;
- (void)_accountForGeocodedEventEncounter;
- (void)_createHypothesizerForDestination:(id)a0;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)a0;

@end

@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject

@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSString *throttleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue;
@property (retain, nonatomic) NSDate *nextEmissionDate;
@property (retain) NSString *eventExternalURL;
@property (copy, nonatomic) id /* block */ requestHypothesisRefreshBlock;
@property (copy, nonatomic) id /* block */ cancelHypothesisRequestRefreshBlock;
@property (copy, nonatomic) id /* block */ emissionBlock;

+ (double)emissionThresholdTimeInterval;
+ (double)_requestHypothesisRefreshInterval;

- (id)alarmName;
- (void)receivedAlarmNamed:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateEmissionDate:(id)a0;
- (void)dealloc;
- (void)_fireEmissionBlock;
- (void)_emissionTimerFired;
- (id)description;
- (void)updatePredictedDepartureDate:(id)a0;
- (void)_createEmissionTimerWithDate:(id)a0;
- (void)_unregisterForNotificationObservation;
- (void)tearDown;
- (void)_uninstallEmissionTimer;
- (void)_significantTimeChangeNotificationReceived;
- (void)_registerForNotificationObservation;

@end

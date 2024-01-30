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

+ (double)_requestHypothesisRefreshInterval;
+ (double)emissionThresholdTimeInterval;

- (void)receivedAlarmNamed:(id)a0;
- (void)tearDown;
- (void)_significantTimeChangeNotificationReceived;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)alarmName;
- (void)dealloc;
- (void)_registerForNotificationObservation;
- (void)_unregisterForNotificationObservation;
- (void)_uninstallEmissionTimer;
- (void)_fireEmissionBlock;
- (void)_updateEmissionDate:(id)a0;
- (void)_emissionTimerFired;
- (void)_createEmissionTimerWithDate:(id)a0;
- (void)updatePredictedDepartureDate:(id)a0;

@end

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

- (void)tearDown;
- (void)receivedAlarmNamed:(id)a0;
- (void)_significantTimeChangeNotificationReceived;
- (void)dealloc;
- (id)alarmName;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_createEmissionTimerWithDate:(id)a0;
- (void)_emissionTimerFired;
- (void)_fireEmissionBlock;
- (void)_registerForNotificationObservation;
- (void)_uninstallEmissionTimer;
- (void)_updateEmissionDate:(id)a0;
- (void)updatePredictedDepartureDate:(id)a0;

@end

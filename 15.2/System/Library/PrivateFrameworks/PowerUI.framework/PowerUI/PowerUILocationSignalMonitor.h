@class RTRoutineManager, NSDictionary, CLLocationManager, CLLocation, NSObject, NSString;
@protocol _DKKnowledgeQuerying, OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue, _CDLocalContext;

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor>

@property (retain, nonatomic) RTRoutineManager *routine;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int authorizationStatus;
@property (retain) CLLocation *currentLocation;
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authorizationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)monitorWithDelegate:(id)a0 withContext:(id)a1 withKnowledgeStore:(id)a2;

- (BOOL)inTypicalChargingLocationWithError:(id *)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (unsigned long long)signalID;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)startMonitoring;
- (id)initWithContextStore:(id)a0 withKnowledgeStore:(id)a1;
- (BOOL)isInSameTimeZone;
- (id)likelyToBeInKnownArea;
- (void).cxx_destruct;
- (BOOL)locationIsUncertain:(id)a0;
- (id)longChargesAroundDate:(id)a0;
- (BOOL)longCharges:(id)a0 occurredInLocationsNear:(id)a1 withError:(id *)a2;
- (id)lastAcquiredLocation;
- (void)stopMonitoring;
- (id)requiredFullChargeDate;
- (long long)inKnownMicrolocation;
- (id)predicateForEventsWithinSeconds:(double)a0 aroundTimeOfDay:(id)a1;
- (BOOL)notAuthorizedForLocation;

@end

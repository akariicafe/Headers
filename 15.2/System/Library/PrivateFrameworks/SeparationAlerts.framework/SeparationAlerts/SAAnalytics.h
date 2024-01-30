@class NSString, NSDate;

@interface SAAnalytics : NSObject <SAAnalyticsServiceProtocol>

@property (nonatomic) unsigned long long numAlerts;
@property (nonatomic) unsigned long long numAlertsLeftBehind;
@property (nonatomic) unsigned long long numAlertsTraveling;
@property (nonatomic) unsigned long long numEnabled;
@property (nonatomic) unsigned long long numDevices;
@property (nonatomic) unsigned long long numItems;
@property (nonatomic) unsigned long long numAccessories;
@property (nonatomic) unsigned long long numBTLE;
@property (nonatomic) unsigned long long numSafe;
@property (nonatomic) unsigned long long numSafeInUse;
@property (nonatomic) BOOL isAllUsingSameSafe;
@property (nonatomic) unsigned long long numBTRequests;
@property (nonatomic) unsigned long long numBTLeftBehindRequests;
@property (nonatomic) unsigned long long numBTTravelingRequests;
@property (nonatomic) unsigned long long numGpsRequests;
@property (nonatomic) unsigned long long numWifiRequests;
@property (nonatomic) unsigned long long numTimers;
@property (nonatomic) unsigned long long numDevicesAtSafeExit;
@property (nonatomic) unsigned long long numUnsafe;
@property (nonatomic) unsigned long long numUnsafeWithLOI;
@property (nonatomic) unsigned long long numUnsafeWithoutLOI;
@property (nonatomic) unsigned long long aggActiveDuration;
@property (nonatomic) unsigned long long aggInSafeDuration;
@property (nonatomic) unsigned long long aggInUnsafeDuration;
@property (nonatomic) unsigned long long aggInTravelDuration;
@property (retain, nonatomic) NSDate *lastActivated;
@property (retain, nonatomic) NSDate *lastSafeEntry;
@property (retain, nonatomic) NSDate *lastUnsafeEntry;
@property (retain, nonatomic) NSDate *lastTravelStart;
@property (readonly, nonatomic) double publishingInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInTravelState:(BOOL)a0;
- (void)addSafeLocationFetchResultCount:(unsigned long long)a0;
- (void)setActiveState:(BOOL)a0;
- (void)addVisit:(BOOL)a0 withRadius:(unsigned long long)a1;
- (void)publishAndResetAggregation;
- (void).cxx_destruct;
- (void)addWakeTimerRequest;
- (void)addGpsLocationRequest:(BOOL)a0;
- (id)init;
- (void)addNumDevicesWithYou:(unsigned long long)a0;
- (void)resetAggregation;
- (void)addDeviceFetchResultCount:(unsigned long long)a0 type1count:(unsigned long long)a1 type2count:(unsigned long long)a2 type3count:(unsigned long long)a3 type4count:(unsigned long long)a4 safeCount:(unsigned long long)a5 usingSameSafe:(BOOL)a6;
- (void)setInSafeLocationState:(BOOL)a0;
- (void)addAggressiveScanRequest:(BOOL)a0;
- (void)setInUnsafeLocationState:(BOOL)a0;
- (void)addPreArrivalAlertTime:(double)a0 didRejoinPriorExit:(BOOL)a1;
- (void)addAlertWithContext:(id)a0;
- (void)addWifiLocationRequest:(BOOL)a0;
- (void)addDidSeparateWhileInVisit:(BOOL)a0 didRejoinPriorExit:(BOOL)a1;

@end

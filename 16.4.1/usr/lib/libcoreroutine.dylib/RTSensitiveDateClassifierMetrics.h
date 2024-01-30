@class NSDate;

@interface RTSensitiveDateClassifierMetrics : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *gatingSignalDate;
@property (nonatomic) long long lookbackWindowCategory;
@property (nonatomic) long long currentLocationAvailability;
@property (nonatomic) long long parkedCarSignalAvailability;
@property (nonatomic) int currentLocationSignalEnvironmentType;
@property (nonatomic) unsigned long long wifiAPCount;

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (void)addCurrentLocation:(id)a0 fromSource:(long long)a1;
- (id)collectMetricsWithLookbackWindowDate:(id)a0;
- (void)processSignal:(long long)a0 date:(id)a1;
- (void)submitMetricsWithLookbackWindowDate:(id)a0;
- (void)updateWifiAccessPointCount:(unsigned long long)a0;

@end

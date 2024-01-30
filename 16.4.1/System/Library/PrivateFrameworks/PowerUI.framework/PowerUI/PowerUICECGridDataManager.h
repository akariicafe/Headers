@class _GDSEmissionForecast, NSMutableArray, _GDSManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log;

@interface PowerUICECGridDataManager : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double refetchPeriod;
@property (nonatomic) BOOL tSavingOpportunity;
@property (nonatomic) BOOL tChargeNow;
@property (retain, nonatomic) _GDSEmissionForecast *currentForecast;
@property (retain, nonatomic) _GDSManager *gridManager;
@property (readonly, nonatomic) NSMutableArray *cleanIntervals;

+ (id)sharedInstance;
+ (id)cleanIntervalsStringFromDates:(id)a0;

- (void)resetState;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldChargeNow;
- (id)valuesFromForecast:(id)a0 forInterval:(double)a1;
- (BOOL)enoughVariationForForecast:(id)a0;
- (id)fetchForecast;
- (id)forecastMapFrom:(id)a0 ofInterval:(double)a1;
- (void)setupChargingTime:(double)a0 forPluggedInTime:(double)a1;
- (BOOL)shouldEngageForPluggedInTime:(double)a0;
- (unsigned long long)thresholdFromForecast:(id)a0 forChargeTime:(double)a1;

@end

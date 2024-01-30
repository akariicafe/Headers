@class NSArray, RTLocation, NSString, NSDate;

@interface RTPlaceDataMetrics : RTMetric <RTMetricProtocol>

@property (nonatomic) double distanceThreshold;
@property (retain, nonatomic) NSArray *visitArray;
@property (retain, nonatomic) RTLocation *locationHome;
@property (retain, nonatomic) RTLocation *locationWork;
@property (retain, nonatomic) NSArray *locationsOfOthers;
@property (retain, nonatomic) NSDate *startDateTime;
@property (retain, nonatomic) NSDate *endDateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)meanOf:(id)a0;
+ (id)supportedMetricKeys;
+ (id)medianOf:(id)a0;
+ (id)standardDeviationOf:(id)a0;
+ (id)generateDictionaryOfOldMetricsWithLearnedLocationStore:(id)a0 locationsOfInterest:(id)a1 homeMapItem:(id)a2 workMapItem:(id)a3 locationsOfOthers:(id *)a4;
+ (id)calculateMLFeatures:(id)a0 startDate:(id)a1 endDate:(id)a2 createBucketedFeatures:(BOOL)a3;
+ (id)booleanKeys;
+ (id)integerKeys;
+ (id)doubleKeys;
+ (id)bucketedKeys;
+ (id)binArrayPercentage;
+ (id)binArrayDuetEventDuration;
+ (id)labelAnEventInterval:(id)a0 basedOnIntervalDict:(id)a1;

- (void).cxx_destruct;
- (BOOL)submitMetricsWithError:(id *)a0;
- (id)initWithVisitArray:(id)a0 distanceThreshold:(double)a1 locationHome:(id)a2 locationWork:(id)a3 locationsOfOthers:(id)a4 startDateTime:(id)a5 endDateTime:(id)a6;
- (void)calculateAndSetVisitMetrics;
- (void)setCurrentInferenceReplayableMetricsFromDict:(id)a0;
- (id)findHomeWorkOthersIntervals;
- (void)setMLMetricsFromFeaturesDict:(id)a0;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (long long)daysBetweenDate:(id)a0 andDate:(id)a1;
- (void)setDerivedMetrics;
- (id)removeTimeFromDateTime:(id)a0 withCalendar:(id)a1;
- (long long)numberOfWeeksBetweenDatesBasedOnCalendar:(id)a0 startDateTime:(id)a1 endDateTime:(id)a2;
- (long long)convertDateTime2SecondsBasedOnCalendar:(id)a0 dateTime:(id)a1;

@end

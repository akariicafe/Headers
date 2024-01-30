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
+ (id)supportedMetricKeys;
+ (id)generateDictionaryOfOldMetricsForLocationsOfInterest:(id)a0 homeMapItem:(id)a1 workMapItem:(id)a2 locationsOfOthers:(id *)a3;
+ (id)booleanKeys;
+ (id)integerKeys;
+ (id)doubleKeys;
+ (id)bucketedKeys;

- (void).cxx_destruct;
- (id)meanOf:(id)a0;
- (id)medianOf:(id)a0;
- (id)standardDeviationOf:(id)a0;
- (BOOL)submitMetricsWithError:(id *)a0;
- (id)initWithVisitArray:(id)a0 distanceThreshold:(double)a1 locationHome:(id)a2 locationWork:(id)a3 locationsOfOthers:(id)a4 startDateTime:(id)a5 endDateTime:(id)a6;
- (void)calculateAndSetVisitMetrics;
- (void)setCurrentInferenceReplayableMetricsFromDict:(id)a0;
- (id)findHomeWorkOthersIntervals;
- (long long)labelEventInterval:(id)a0 basedOnIntervalDict:(id)a1;
- (void)setWiFiStabilityRatioForHome:(id)a0 work:(id)a1 others:(id)a2;
- (void)calculateAndSetVisitCorrelatedMetricsForEventType:(id)a0 eventHappenedArrayHome:(id)a1 eventHappenedArrayWork:(id)a2 eventHappenedArrayOthers:(id)a3 eventLongestArrayHome:(id)a4 eventLongestArrayWork:(id)a5 eventLongestArrayOthers:(id)a6 eventTotalArrayHome:(id)a7 eventTotalArrayWork:(id)a8 eventTotalArrayOthers:(id)a9;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (long long)daysBetweenDate:(id)a0 andDate:(id)a1;
- (void)setDerivedMetrics;
- (id)removeTimeFromDateTime:(id)a0 withCalendar:(id)a1;
- (long long)numberOfWeeksBetweenDatesBasedOnCalendar:(id)a0 startDateTime:(id)a1 endDateTime:(id)a2;
- (long long)convertDateTime2SecondsBasedOnCalendar:(id)a0 dateTime:(id)a1;

@end

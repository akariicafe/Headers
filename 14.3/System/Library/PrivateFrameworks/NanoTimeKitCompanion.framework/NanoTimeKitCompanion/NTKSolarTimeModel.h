@class CLLocation, GEOAlmanac, NSDate;

@interface NTKSolarTimeModel : NSObject

@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSDate *startDateForReferenceDate;
@property (retain, nonatomic) NSDate *endDateForReferenceDate;
@property (retain, nonatomic) NSDate *localSolarMidnightDate;
@property (nonatomic) double effectiveSolarDayLength;
@property (nonatomic) BOOL dependentValuesNeedUpdate;
@property (retain, nonatomic) GEOAlmanac *sunriseSunsetSolarAlmanac;
@property (retain, nonatomic) GEOAlmanac *dawnDuskSolarAlmanac;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) BOOL usePlaceholderData;

- (id)init;
- (void).cxx_destruct;
- (double)percentageThroughPeriodForDate:(id)a0;
- (id)dateForPercentageThroughPeriod:(double)a0;
- (id)ntkCacheableKey;
- (id)initWithReferenceDate:(id)a0 referenceLocation:(id)a1;
- (void)_updateDependentValues;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)a0;
- (id)normalizeDateIntervalForDate:(id)a0;
- (BOOL)includesDate:(id)a0;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (void)updateModelWithDate:(id)a0;
- (void)updateForTimeZoneChange;

@end

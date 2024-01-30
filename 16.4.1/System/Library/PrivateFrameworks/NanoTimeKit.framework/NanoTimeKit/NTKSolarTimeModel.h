@class CLLocation, NSDate;

@interface NTKSolarTimeModel : NSObject

@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSDate *startDateForReferenceDate;
@property (retain, nonatomic) NSDate *endDateForReferenceDate;
@property (retain, nonatomic) NSDate *localSolarMidnightDate;
@property (nonatomic) double effectiveSolarDayLength;
@property (nonatomic) BOOL dependentValuesNeedUpdate;
@property (retain, nonatomic) NSDate *localSunriseDate;
@property (retain, nonatomic) NSDate *localSunsetDate;
@property (retain, nonatomic) NSDate *localDawnDate;
@property (retain, nonatomic) NSDate *localDuskDate;
@property (retain, nonatomic) NSDate *localSolarNoonDate;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) BOOL usePlaceholderData;

- (id)init;
- (void).cxx_destruct;
- (double)percentageThroughPeriodForDate:(id)a0;
- (id)dateForPercentageThroughPeriod:(double)a0;
- (id)ntkCacheableKey;
- (id)_nextEvent:(id)a0 ofType:(unsigned int)a1;
- (void)_updateDependentValues;
- (BOOL)includesDate:(id)a0;
- (id)initWithReferenceDate:(id)a0 referenceLocation:(id)a1;
- (id)normalizeDateIntervalForDate:(id)a0;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)a0;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)a0;

@end

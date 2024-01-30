@class SUAutoInstallForecast, NSCalendar, NSDate;

@interface _SUAutoInstallForecastDateCache : NSObject {
    long long _scheduleType;
    SUAutoInstallForecast *_weak_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    BOOL _parsed;
}

@property (readonly, nonatomic) long long scheduleType;
@property (readonly, nonatomic) NSDate *roundedStartTime;
@property (readonly, nonatomic) NSDate *roundedEndTime;
@property (readonly, nonatomic) NSCalendar *calendar;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_parseForecast;
- (id)_componentsFromDate:(id)a0;
- (void)_computeTonightRangeRelativeToDate:(id)a0 extraDayOffset:(long long)a1 outStart:(id *)a2 outEnd:(id *)a3;
- (BOOL)_isStart:(id)a0 end:(id)a1 withinDateRange:(id)a2 end:(id)a3;
- (id)initWithForecast:(id)a0;

@end

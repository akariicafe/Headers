@class NSArray, NSCalendar, NSDateInterval, NSDate, MTAlarm;

@interface MTUIBedtimeGraphData : NSObject

@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *allColumnData;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) BOOL useTrailingWeek;
@property (readonly, nonatomic) NSDate *earliestStartOnFirstDay;
@property (readonly, nonatomic) NSDate *latestEndOnFirstDay;
@property (readonly, nonatomic) long long columnCount;
@property (readonly, nonatomic) NSDateInterval *firstSleepAlarmInterval;

- (id)objectAtIndexedSubscript:(long long)a0;
- (void).cxx_destruct;
- (id)initWithSleepData:(id)a0 sleepAlarm:(id)a1;
- (id)initWithSleepData:(id)a0 sleepAlarm:(id)a1 useTrailingWeek:(BOOL)a2;
- (id)sleepAlarmIntervalForDay:(long long)a0;
- (long long)_earliestDay;

@end

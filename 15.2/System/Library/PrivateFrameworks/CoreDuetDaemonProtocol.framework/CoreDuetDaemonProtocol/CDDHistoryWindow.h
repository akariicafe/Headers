@class NSDate;

@interface CDDHistoryWindow : NSObject

@property (readonly) NSDate *start;
@property (readonly) double duration;
@property (readonly) double recurrenceDelta;
@property (readonly) double recurrenceWidth;

+ (id)allTimeHistoryWindow;
+ (id)dailyHistoryWindowWithWidth:(double)a0 endingOnDate:(id)a1 historyLengthInDays:(int)a2;
+ (id)singleDayHistoryWindowWithWidth:(double)a0 forDate:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStart:(id)a0 duration:(double)a1 recurrenceDelta:(double)a2 recurrenceWidth:(double)a3 error:(id *)a4;

@end

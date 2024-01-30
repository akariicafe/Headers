@class NSString, NSMutableDictionary;

@interface DBDateFormatter : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *dateFormatters;
@property (class, readonly, nonatomic) NSMutableDictionary *dateIntervalFormatters;
@property (class, readonly, nonatomic) NSString *formattedNow;

+ (id)formattedRange:(id)a0;
+ (id)_dateFormatterFromToken:(id)a0;
+ (id)_dateIntervalFormatterFromToken:(id)a0;
+ (id)_formatDate:(id)a0 withToken:(id)a1;
+ (id)_formatIntervalFromDate:(id)a0 toDate:(id)a1 withToken:(id)a2;
+ (id)dateFormatterForToken:(id)a0;
+ (id)dateIntervalFormatterForToken:(id)a0;
+ (id)formattedDate:(id)a0;
+ (id)formattedDateTimeStamp:(id)a0;
+ (id)formattedRangeDateTimeStampStart:(id)a0 end:(id)a1;
+ (id)formattedRangeDateTimestamp:(id)a0;
+ (id)formattedRangeStart:(id)a0 end:(id)a1;
+ (id)formattedRangeTimestamp:(id)a0;
+ (id)formattedRangeTimestampStart:(id)a0 end:(id)a1;
+ (id)formattedTime:(id)a0;
+ (id)formattedTimeStamp:(id)a0;

@end

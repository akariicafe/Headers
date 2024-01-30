@class NSArray, NSDateInterval;

@interface GEOPOIEventHours : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSArray *hours;

+ (id)eventHoursForDateTimeRanges:(id)a0;

- (id)initWithDateTimeRange:(id)a0;
- (id)initWithDateInterval:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

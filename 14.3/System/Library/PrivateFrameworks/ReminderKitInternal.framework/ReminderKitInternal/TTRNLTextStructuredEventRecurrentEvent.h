@class NSDictionary, NSDate;

@interface TTRNLTextStructuredEventRecurrentEvent : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isAllDay;
@property (retain, nonatomic) NSDictionary *frequency;
@property (readonly, nonatomic) long long hourFrequency;
@property (readonly, nonatomic) long long dayFrequency;
@property (readonly, nonatomic) long long monthFrequency;
@property (readonly, nonatomic) long long weekOfMonthFrequency;
@property (readonly, nonatomic) long long weekDay;
@property (readonly, nonatomic) long long weekdayOrdinal;
@property (readonly, nonatomic) long long weekdayStart;
@property (readonly, nonatomic) long long weekdayEnd;
@property (readonly, nonatomic) long long weekOfYear;
@property (readonly, nonatomic) long long yearFrequency;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 startDate:(id)a1 endDate:(id)a2 isAllDay:(BOOL)a3 frequency:(id)a4;
- (long long)frequencyForKey:(id)a0;

@end

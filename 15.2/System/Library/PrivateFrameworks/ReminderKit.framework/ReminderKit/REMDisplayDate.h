@class NSTimeZone, NSDate;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) NSTimeZone *timeZone;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDueDateComponents:(id)a0 alarms:(id)a1;
- (id)initWithDate:(id)a0 allDay:(BOOL)a1 timeZone:(id)a2;
- (id)initWithFloatingDateComponents:(id)a0 nonFloatingDateComponents:(id)a1;

@end

@interface CLKDate : NSDate

+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)date;
+ (double)timeIntervalSinceReferenceDate;
+ (id)complicationDate;
+ (id)unmodifiedDate;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)a0;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)a0;

- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)init;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (double)timeIntervalSinceNow;
- (id)initWithCoder:(id)a0;

@end

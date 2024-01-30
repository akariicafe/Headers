@interface CLKDate : NSDate

+ (double)timeIntervalSinceReferenceDate;
+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)date;
+ (id)complicationDate;
+ (id)unmodifiedDate;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)a0;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)a0;

- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)timeIntervalSinceNow;

@end
